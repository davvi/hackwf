/*
 * WI-FI controller configuration
 */

#define MGMT_AP_AUTH_ON true // If set to true, WPA2-PSK will be used. Otherwise authentication will be open
                          // and anyone can connect to this management AP.
#define CONFIG_MGMT_AP_SSID "hackw_MGMT" // Management AP SSID
#define CONFIG_MGMT_AP_PASSWORD "stromg_passwsssssss" // Password for management AP WPA2 (minimum 8 characters 
#define CONFIG_MGMT_AP_MAX_CONNECTIONS 1 // Maximum number of connected clients (range 1 10)

#define MGMT_AP_CHANNEL 1 // Channel on which management AP should run (range 1 13)

#define CONFIG_SCAN_MAX_AP 10 // Maximun AP scanned default 20
