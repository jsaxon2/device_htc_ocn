// EE_UK | MID: 2PZC10000 | CID: EVE_001
static bool is_variant_eeuk(std::string bootcid) {
    if (bootcid == "EVE__001") return true;
    return false;
}

static const char *htc_eeuk_properties =
    "ro.product.model=HTC U11\n"
    "ro.ril.oem.ecclist=999,112,911\n"
    "ro.ril.enable.pre_r8fd=1\n"
    "ro.ril.disable.sync_pf=0\n"
    "ro.ril.hsxpa=5\n"
    "ro.ril.hsdpa.category=24\n"
    "ro.ril.hsupa.category=6\n"
    "ro.ril.disable.cpc=1\n"
    "ro.product.model=MSM8998 for arm64\n"
    "ro.product.device=htc_ocnuhl\n"
    "ro.build.product=htc_ocnuhl\n"
    "persist.rild.nitz_plmn=\n"
    "persist.rild.nitz_long_ons_0=\n"
    "persist.rild.nitz_long_ons_1=\n"
    "persist.rild.nitz_long_ons_2=\n"
    "persist.rild.nitz_long_ons_3=\n"
    "persist.rild.nitz_short_ons_0=\n"
    "persist.rild.nitz_short_ons_1=\n"
    "persist.rild.nitz_short_ons_2=\n"
    "persist.rild.nitz_short_ons_3=\n"
    "ril.subscription.types=NV,RUIM\n"
    "telephony.lteOnCdmaDevice=1\n"
    "persist.radio.VT_CAM_INTERFACE=2\n"
    "telephony.lteOnCdmaDevice=0\n"
    "persist.radio.fill_eons=1\n"
    "persist.radio.fill_eons=1\n"
    "persist.igps.sensor=on\n"
    "persist.radio.apm_sim_not_pwdn=0\n"
    "persist.radio.apm_mdm_not_pwdn=1\n"
    "persist.radio.cs_srv_type=1\n"
    "persist.radio.snapshot_timer=0\n"
    "persist.radio.data_ltd_sys_ind=1\n"
    "persist.radio.VT_ENABLE=1\n"
    "persist.radio.VT_HYBRID_ENABLE=1\n"
    "persist.radio.ROTATION_ENABLE=1\n"
    "persist.radio.RATE_ADAPT_ENABLE=1\n"
    "persist.radio.videopause.mode=1\n"
    "ro.telephony.default_network=9\n"
    "persist.radio.sap_silent_pin=1\n"
;
