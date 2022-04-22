#ifndef WEBSERVER_H
#define WEBSERVER_H

#include "esp_event.h"

ESP_EVENT_DECLARE_BASE(WEBSERVER_EVENTS);
enum {
    WEBSERVER_EVENT_ATTACK_REQUEST,
    WEBSERVER_EVENT_ATTACK_RESET
};

/**
 * @brief Struct to deserialize attack request parameters 
 * 
 */
typedef struct {
    uint8_t ap_record_id;   //< ID of chosen AP. It can be used to access ap_records array from wifi_controller - ap_scanner
    uint8_t type;           //< Chosen type of attack
    uint8_t method;         //< Chosen method of attack
    uint8_t timeout;        //< Attack timeout in seconds
} attack_request_t;

/**
 * @brief Initializes and starts webserver 
 */
void webserver_run();

#endif