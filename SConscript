from building import *

cwd  = GetCurrentDir()

list = os.listdir(cwd)

sys_config = os.path.join(cwd, '..', 'config', 'sys_config.h')
options = LocalOptions(sys_config)

src = []
src += ["driver/audio/ring_buffer_dma_write.c"]
#src += ["driver/codec/driver_codec_es8374.c"]
src += ["driver/common/dd.c"]
src += ["driver/common/drv_model.c"]
src += ["driver/dma/dma.c"]
src += ["driver/entry/arch_main.c"]
src += ["driver/fft/fft.c"]
src += ["driver/flash/flash.c"]
src += ["driver/general_dma/general_dma.c"]
src += ["driver/i2s/i2s.c"]
src += ["driver/icu/icu.c"]
src += ["driver/intc/intc.c"]
src += ["driver/irda/irda.c"]
src += ["driver/macphy_bypass/mac_phy_bypass.c"]
src += ["driver/phy/phy_trident.c"]
src += ["driver/pwm/mcu_ps_timer.c"]
src += ["driver/pwm/bk_timer.c"]
src += ["driver/saradc/saradc.c"]
src += ["driver/sdcard/sdcard.c"]
src += ["driver/sdcard/sdio_driver.c"]
src += ["driver/spidma/spidma.c"]
src += ["driver/spi/spi_psram.c"]
src += ["driver/spi/spi_flash.c"]
src += ["driver/jpeg/jpeg_encoder.c"]
src += ["driver/i2c/i2c1.c"]
src += ["driver/i2c/i2c2.c"]
src += ["driver/sys_ctrl/sys_ctrl.c"]
src += ["driver/uart/Retarget.c"]
src += ["driver/uart/uart.c"]
src += ["driver/wdt/wdt.c"]
src += ["driver/usb/usb.c"]
src += ["driver/rw_pub/rw_platf_pub.c"]
src += ["driver/driver.c"]
src += ["driver/qspi/qspi.c"]
src += ["rttos/source/rtos_pub.c"]
src += ["rttos/source/port.c"]
src += ["rttos/source/port_asm.S"]
src += ["rttos/source/rtos_task.c"]
src += ["rttos/mem_arch.c"]
src += ["rttos/os_clock.c"]
src += ["rttos/str_arch.c"]
src += ["rttos/target_util.c"]
src += ["rttos/ate/rtt_ate_app.c"]    
src += ["func/saradc_intf/saradc_intf.c"]
src += ["app/config/param_config.c"]
src += ["app/app.c"]
src += ["app/standalone-ap/sa_ap.c"]
src += ["app/standalone-station/sa_station.c"]
src += ["app/video_work/video_transfer_tcp.c"]
src += ["app/video_work/video_transfer_udp.c"]
src += ["app/video_work/video_buffer.c"]
src += ["app/net_work/video_demo_main.c"]
src += ["app/net_work/video_demo_station.c"]
src += ["app/net_work/video_demo_softap.c"]
src += ["app/http/utils_httpc.c"]
src += ["app/http/utils_net.c"]
src += ["app/http/utils_timer.c"]
src += ["app/http/lite-log.c"]

if (GetLocalDepend(options, 'CFG_PCM_RESAMPLER') == 1):
	src += ["func/pcm_resampler/pcm_resampler_port.c"]

if (0 == string.find(GetLocalDepend(options, 'CFG_SOC_NAME'), 'SOC_BK7271')):
	src += ["driver/i2c/i2c1_bk7271.c"]
	src += ["driver/mailbox/mailbox.c"]
	src += ["driver/gpio/gpio_bk7271.c"]
	src += ["driver/spi/spi_bk7271.c"]
	src += ["driver/spi/spi_slave_bk7271.c"]
	src += ["driver/spi/spi_master_bk7271.c"]
	src += ["driver/pwm/pwm_bk7271.c"]
	src += ["driver/pwm/timer_bk7271.c"]
else:
	src += ["driver/spi/spi.c"]
	src += ["driver/spi/spi_master.c"]
	src += ["driver/spi/spi_slave.c"]
	src += ["driver/pwm/pwm.c"]
	src += ["driver/pwm/pwm_bk7231n.c"]
	src += ["driver/gpio/gpio.c"]

src += ["demo/ieee802_11_demo.c"]
src += ["func/func.c"]
src += ["func/bk_aware/bk_aware.c"]
src += ["func/audio/audio_intf.c"]
src += ["func/power_save/power_save.c"]
src += ["func/power_save/mcu_ps.c"]
src += ["func/power_save/manual_ps.c"]
src += ["func/power_save/ap_idle.c"]
src += ["func/rwnx_intf/rw_msg_rx.c"]
src += ["func/net_param_intf/net_param.c"]
src += ["func/misc/pseudo_random.c"]
src += ["func/misc/start_type.c"]
src += ["func/joint_up/role_launch.c"]
src += ["func/ble_wifi_exchange/ble_wifi_port.c"]
src += ["func/temp_detect/temp_detect.c"]
src += ["func/rwnx_intf/rw_ieee80211.c"]
src += ["func/rwnx_intf/rw_msdu.c"]
src += ["func/rwnx_intf/rw_msg_tx.c"]
#src += ["func/sdio_intf/sdio_intf.c"]
#src += ["func/sdio_trans/sdio_trans.c"]
src += ["func/user_driver/BkDriverFlash.c"]
src += ["func/wlan_ui/wlan_ui.c"]
src += ["func/hostapd_intf/hostapd_intf.c"]

src += ["func/user_driver/BkDriverPwm.c"]
src += ["func/user_driver/BkDriverQspi.c"]
src += ["func/user_driver/BkDriverRng.c"]
src += ["func/usb/fusb.c"]
src += ["func/usb_plug/usb_plug.c"]

src += ["func/spidma_intf/spidma_intf.c"]
src += ["func/camera_intf/camera_intf.c"]
src += ["func/video_transfer/video_transfer.c"]
#src += ["func/voice_transfer/voice_transfer.c"]
src += ["func/lwip_intf/dhcpd/dhcp-server.c"]
src += ["func/lwip_intf/dhcpd/dhcp-server-main.c"]
#src += ["func/vad/vad.c"]
#src += ["func/vad/vad_core.c"]
#src += ["func/vad/wb_vad.c"]

path = []
path += [cwd + '/app']
path += [cwd + '/app/config']
path += [cwd + '/app/standalone-ap']
path += [cwd + '/app/http']
path += [cwd + '/app/standalone-station']
path += [cwd + '/app/led']
path += [cwd + '/app/app_demo']
path += [cwd + '/app/video_work']
path += [cwd + '/app/net_work']
path += [cwd + '/common']
path += [cwd + '/release']
path += [cwd + '/demo']
path += [cwd + '/driver/audio']
path += [cwd + '/driver/codec']
path += [cwd + '/driver/common']
path += [cwd + '/driver/common/reg']
path += [cwd + '/driver/dma']
path += [cwd + '/driver/entry'] 
path += [cwd + '/driver/fft']
path += [cwd + '/driver/flash']
path += [cwd + '/driver/general_dma']
path += [cwd + '/driver/gpio']
path += [cwd + '/driver/i2s']
path += [cwd + '/driver/icu']
path += [cwd + '/driver/include']
path += [cwd + '/driver/intc']
path += [cwd + '/driver/irda']
path += [cwd + '/driver/macphy_bypass']
path += [cwd + '/driver/phy']
path += [cwd + '/driver/pwm']

path += [cwd + '/driver/rc_beken']
path += [cwd + '/driver/saradc']
path += [cwd + '/driver/sdcard']
path += [cwd + '/driver/sdio']
path += [cwd + '/driver/spi']
path += [cwd + '/driver/spidma']
path += [cwd + '/driver/sys_ctrl']
path += [cwd + '/driver/uart']
path += [cwd + '/driver/wdt']
path += [cwd + '/driver/rw_pub']
path += [cwd + '/driver/jpeg']
path += [cwd + '/driver/i2c']
path += [cwd + '/driver/security']
path += [cwd + '/func/sdio_intf']
path += [cwd + '/driver/usb']
path += [cwd + '/driver/usb/include']
path += [cwd + '/driver/usb/include/class']
path += [cwd + '/driver/usb/src/cd']
path += [cwd + '/driver/usb/src/drivers/comm']
path += [cwd + '/driver/usb/src/drivers/compl']
path += [cwd + '/driver/usb/src/drivers/hid']
path += [cwd + '/driver/usb/src/drivers/hub']
path += [cwd + '/driver/usb/src/drivers/msd']
path += [cwd + '/driver/usb/src/drivers/trans']
path += [cwd + '/driver/usb/src/examples']
path += [cwd + '/driver/usb/src/hid']
path += [cwd + '/driver/usb/src/msc']
path += [cwd + '/driver/usb/src/systems/none']
path += [cwd + '/driver/usb/src/systems/none/afs']
path += [cwd + '/driver/usb/src/test']
path += [cwd + '/driver/usb/src/test/cbs']
path += [cwd + '/driver/usb/src/test/compl']
path += [cwd + '/driver/usb/src/test/hub']
path += [cwd + '/driver/usb/src/uvc']
path += [cwd + '/rttos/include']
path += [cwd + '/rttos/source']
path += [cwd + '/rttos/ate']
path += [cwd + '/ip/common']
path += [cwd + '/ip/ke']
path += [cwd + '/ip/mac']
path += [cwd + '/ip/lmac/src/hal']
path += [cwd + '/ip/lmac/src/mm']
path += [cwd + '/ip/lmac/src/ps']
path += [cwd + '/ip/lmac/src/rd']
path += [cwd + '/ip/lmac/src/rx']
path += [cwd + '/ip/lmac/src/scan']
path += [cwd + '/ip/lmac/src/sta']
path += [cwd + '/ip/lmac/src/tx']
path += [cwd + '/ip/lmac/src/vif']
path += [cwd + '/ip/lmac/src/rx/rxl']
path += [cwd + '/ip/lmac/src/tx/txl']
path += [cwd + '/ip/lmac/src/rwnx']
path += [cwd + '/ip/lmac/src/p2p']
path += [cwd + '/ip/lmac/src/chan']
path += [cwd + '/ip/lmac/src/td']
path += [cwd + '/ip/lmac/src/tpc']
path += [cwd + '/ip/lmac/src/tdls']
path += [cwd + '/ip/umac/src/bam']
path += [cwd + '/ip/umac/src/llc']
path += [cwd + '/ip/umac/src/me']
path += [cwd + '/ip/umac/src/rxu']
path += [cwd + '/ip/umac/src/scanu']
path += [cwd + '/ip/umac/src/sm']
path += [cwd + '/ip/umac/src/txu']
path += [cwd + '/ip/umac/src/apm']
path += [cwd + '/ip/umac/src/rc']
path += [cwd + '/ip/umac/src/mesh']
path += [cwd + '/ip/umac/src/mfp']
path += [cwd + '/func']
path += [cwd + '/func/include']
path += [cwd + '/func/bk_aware']
path += [cwd + '/func/rf_test']
path += [cwd + '/func/joint_up']
path += [cwd + '/func/temp_detect']
path += [cwd + '/func/user_driver']
path += [cwd + '/func/power_save']
path += [cwd + '/func/ethernet_intf']
path += [cwd + '/func/uart_debug']
path += [cwd + '/func/ip/umac/src/apm']
path += [cwd + '/func/rwnx_intf']
if 1 or (GetLocalDepend(options, 'CFG_USE_WPA_29') == 1):
    path += [cwd + '/func/wpa_supplicant_2_9/src']
    path += [cwd + '/func/wpa_supplicant_2_9/bk_patch']
    path += [cwd + '/func/wpa_supplicant_2_9/hostapd']
    path += [cwd + '/func/wpa_supplicant_2_9/src/utils']
    path += [cwd + '/func/wpa_supplicant_2_9/src/drivers']
    path += [cwd + '/func/wpa_supplicant_2_9/src/common']
    path += [cwd + '/func/wpa_supplicant_2_9/wpa_supplicant']
else:
    path += [cwd + '/func/hostapd-2.5/src']
    path += [cwd + '/func/hostapd-2.5/bk_patch']
    path += [cwd + '/func/hostapd-2.5/hostapd']
    path += [cwd + '/func/hostapd-2.5/src/utils']
    path += [cwd + '/func/hostapd-2.5/src/drivers']
    path += [cwd + '/func/hostapd-2.5/src/common']
path += [cwd + '/func/wpa_supplicant_2_9/src/common/']
path += [cwd + '/func/vad']
path += [cwd + '/func/spidma_intf']
path += [cwd + '/func/camera_intf']
path += [cwd + '/func/video_transfer']
path += [cwd + '/func/voice_transfer']
path += [cwd + '/func/lwip_intf/dhcpd']
path += [cwd + '/func/rf_use']
path += [cwd + '/func/ble_wifi_exchange']
path += [cwd + '/func/saradc_intf']
path += [cwd + '/func/sensor']
if (GetLocalDepend(options, 'CFG_WPA3') == 1):
    path += [cwd + '/func/wolfssl']

if (0 == string.find(GetLocalDepend(options, 'CFG_SOC_NAME'), 'SOC_BK7231N')):
    src += ["driver/calendar/calendar.c"]
    path += [cwd + '/driver/calendar']

libs = []

libpath = []

objs = []

cppdefines = ['CFG_SUPPORT_RTT=1']

group = DefineGroup('beken_sdk', src, depend = [''], CPPPATH = path, CPPDEFINES = cppdefines, LIBS = libs, LIBPATH = libpath)

for d in list:
    path = os.path.join(cwd, d)
    if os.path.isfile(os.path.join(path, 'SConscript')):
        objs = objs + SConscript(os.path.join(d, 'SConscript'))
objs = objs + group
Return('objs')