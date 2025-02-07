#include <stdio.h>
#include <string.h>
#include "uf2.h"

#define APP_START_ADDRESS 0x11000
#define BOARD_UF2_FAMILY_ID  0xe9f35d3b


int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "USAGE: %s file.bin [file.uf2]\n", argv[0]);
        return 1;
    }
    FILE *f = fopen(argv[1], "rb");
    if (!f) {
        fprintf(stderr, "No such file: %s\n", argv[1]);
        return 1;
    }

    fseek(f, 0L, SEEK_END);
    uint32_t sz = ftell(f);
    fseek(f, 0L, SEEK_SET);

    const char *outname = argc > 2 ? argv[2] : "flash.uf2";

    FILE *fout = fopen(outname, "wb");

    UF2_Block bl;
    memset(&bl, 0, sizeof(bl));

    bl.magicStart0 = UF2_MAGIC_START0;
    bl.magicStart1 = UF2_MAGIC_START1;
    bl.magicEnd = UF2_MAGIC_END;
    bl.targetAddr = APP_START_ADDRESS;
    bl.numBlocks = (sz + 255) / 256;
    bl.payloadSize = 256;
	// familiy ID
	bl.flags = UF2_FLAG_FAMILYID;
	bl.familyID = BOARD_UF2_FAMILY_ID;
    int numbl = 0;
    while (fread(bl.data, 1, bl.payloadSize, f)) {
        bl.blockNo = numbl++;
        fwrite(&bl, 1, sizeof(bl), fout);
		printf("la: %x\n", bl.targetAddr);
        bl.targetAddr += bl.payloadSize;
        // clear for next iteration, in case we get a short read
        memset(bl.data, 0, sizeof(bl.data));
    }
    fclose(fout);
    fclose(f);
    printf("Wrote %d blocks to %s\n", numbl, outname);
    return 0;
}
