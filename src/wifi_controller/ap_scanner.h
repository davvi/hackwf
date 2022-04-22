#ifndef AP_SCANNER_H
#define AP_SCANNER_H

#include "esp_wifi_types.h"
#include "wifi_config.h"

/**
 * @brief Linked list of wifi_ap_record_t records.
 * 
 */
typedef struct {
    uint16_t count;
    wifi_ap_record_t records[CONFIG_SCAN_MAX_AP];
} wifictl_ap_records_t;

/**
 * @brief Switches ESP into scanning mode and stores result.
 * 
 */
void wifictl_scan_nearby_aps();

/**
 * @brief Returns current list of scanned APs.
 * 
 * @return const wifictl_ap_records_t* 
 */
const wifictl_ap_records_t *wifictl_get_ap_records();

/**
 * @brief Returns AP record on given index
 * 
 * @param index 
 * @return const wifi_ap_record_t* 
 */
const wifi_ap_record_t *wifictl_get_ap_record(unsigned index);

#endif