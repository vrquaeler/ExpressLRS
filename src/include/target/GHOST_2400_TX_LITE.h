// This target extends the GHOST_2400_TX target

#undef TX_DEVICE_NAME
#define TX_DEVICE_NAME              "Ghost 24TX Lite"

// There is some special handling for this target
#define TARGET_TX_GHOST_LITE

#define HAS_OLED_128_32
