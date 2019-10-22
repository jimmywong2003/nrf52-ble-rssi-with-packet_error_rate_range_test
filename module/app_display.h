#ifndef __APP_DISPLAY_H
#define __APP_DISPLAY_H

#include <stdint.h>
#include <stdbool.h>

#define SCREEN_Y_LOC_MID            115

#define INTERWIDGET_SPACE           4
#define GROUPED_INTERWIDGET_SPACE   2

#define RGB_888_TO_565(a) ((((a) & 0xF80000) >> 8) | (((a) & 0x00FC00) >> 5) | (((a) & 0x0000FC) >> 3))


// Phy text/button
#define TXT_ID_0_X_LOCATION         4
#define TXT_ID_0_Y_LOCATION         5
#define TXT_ID_0_WIDTH              105
#define TXT_ID_0_HEIGHT             20

#define BTN_ID_0_X_LOCATION TXT_ID_0_X_LOCATION
#define BTN_ID_0_Y_LOCATION TXT_ID_0_Y_LOCATION + TXT_ID_0_HEIGHT + GROUPED_INTERWIDGET_SPACE
#define BTN_ID_0_WIDTH TXT_ID_0_WIDTH
#define BTN_ID_0_HEIGHT 30

// TX power text/button
#define TXT_ID_1_X_LOCATION TXT_ID_0_X_LOCATION + SCREEN_Y_LOC_MID
#define TXT_ID_1_Y_LOCATION TXT_ID_0_Y_LOCATION
#define TXT_ID_1_WIDTH TXT_ID_0_WIDTH
#define TXT_ID_1_HEIGHT TXT_ID_0_HEIGHT

#define BTN_ID_1_X_LOCATION TXT_ID_1_X_LOCATION
#define BTN_ID_1_Y_LOCATION TXT_ID_0_Y_LOCATION + TXT_ID_1_HEIGHT + GROUPED_INTERWIDGET_SPACE
#define BTN_ID_1_WIDTH TXT_ID_0_WIDTH
#define BTN_ID_1_HEIGHT BTN_ID_0_HEIGHT

// App state text/button
#define TXT_ID_2_X_LOCATION TXT_ID_0_X_LOCATION
#define TXT_ID_2_Y_LOCATION BTN_ID_0_Y_LOCATION + BTN_ID_0_HEIGHT + INTERWIDGET_SPACE
#define TXT_ID_2_WIDTH SCREEN_Y_LOC_MID + TXT_ID_0_WIDTH
#define TXT_ID_2_HEIGHT TXT_ID_0_HEIGHT

#define BTN_ID_2_X_LOCATION TXT_ID_0_X_LOCATION
#define BTN_ID_2_Y_LOCATION TXT_ID_2_Y_LOCATION + TXT_ID_2_HEIGHT + GROUPED_INTERWIDGET_SPACE
#define BTN_ID_2_WIDTH TXT_ID_2_WIDTH
#define BTN_ID_2_HEIGHT BTN_ID_0_HEIGHT

// LBS button state
#define TXT_ID_10_X_LOCATION TXT_ID_0_X_LOCATION
#define TXT_ID_10_Y_LOCATION BTN_ID_2_Y_LOCATION + BTN_ID_0_HEIGHT + INTERWIDGET_SPACE
#define TXT_ID_10_WIDTH TXT_ID_0_WIDTH
#define TXT_ID_10_HEIGHT TXT_ID_0_HEIGHT

#define BTN_ID_3_X_LOCATION TXT_ID_0_X_LOCATION
#define BTN_ID_3_Y_LOCATION TXT_ID_10_Y_LOCATION + TXT_ID_10_HEIGHT + GROUPED_INTERWIDGET_SPACE
#define BTN_ID_3_WIDTH TXT_ID_10_WIDTH
#define BTN_ID_3_HEIGHT BTN_ID_0_HEIGHT

// LBS LED state
#define TXT_ID_11_X_LOCATION TXT_ID_1_X_LOCATION
#define TXT_ID_11_Y_LOCATION BTN_ID_2_Y_LOCATION + BTN_ID_0_HEIGHT + INTERWIDGET_SPACE
#define TXT_ID_11_WIDTH TXT_ID_10_WIDTH
#define TXT_ID_11_HEIGHT TXT_ID_0_HEIGHT

#define BTN_ID_4_X_LOCATION TXT_ID_1_X_LOCATION
#define BTN_ID_4_Y_LOCATION TXT_ID_11_Y_LOCATION + TXT_ID_2_HEIGHT + GROUPED_INTERWIDGET_SPACE
#define BTN_ID_4_WIDTH TXT_ID_10_WIDTH
#define BTN_ID_4_HEIGHT BTN_ID_0_HEIGHT

// RSSI/PSR status window
#define TXT_ID_3_X_LOCATION 16
#define TXT_ID_3_WIDTH 90
#define TXT_ID_3_HEIGHT 16
#define TXT_ID_3_Y_LOCATION BTN_ID_4_Y_LOCATION + BTN_ID_4_HEIGHT + INTERWIDGET_SPACE

#define TXT_ID_4_X_LOCATION TXT_ID_3_X_LOCATION
#define TXT_ID_4_Y_LOCATION TXT_ID_3_Y_LOCATION+TXT_ID_3_HEIGHT
#define TXT_ID_4_WIDTH TXT_ID_3_WIDTH
#define TXT_ID_4_HEIGHT TXT_ID_3_HEIGHT

#define TXT_ID_5_X_LOCATION TXT_ID_3_X_LOCATION
#define TXT_ID_5_Y_LOCATION TXT_ID_4_Y_LOCATION+TXT_ID_4_HEIGHT
#define TXT_ID_5_WIDTH TXT_ID_3_WIDTH
#define TXT_ID_5_HEIGHT TXT_ID_3_HEIGHT

#define TXT_ID_6_X_LOCATION TXT_ID_3_X_LOCATION + TXT_ID_3_WIDTH
#define TXT_ID_6_Y_LOCATION TXT_ID_3_Y_LOCATION
#define TXT_ID_6_WIDTH 108
#define TXT_ID_6_HEIGHT TXT_ID_3_HEIGHT

#define TXT_ID_7_X_LOCATION TXT_ID_4_X_LOCATION + TXT_ID_4_WIDTH
#define TXT_ID_7_Y_LOCATION TXT_ID_4_Y_LOCATION
#define TXT_ID_7_WIDTH TXT_ID_6_WIDTH
#define TXT_ID_7_HEIGHT TXT_ID_4_HEIGHT

#define TXT_ID_8_X_LOCATION TXT_ID_5_X_LOCATION + TXT_ID_5_WIDTH
#define TXT_ID_8_Y_LOCATION TXT_ID_5_Y_LOCATION
#define TXT_ID_8_WIDTH TXT_ID_6_WIDTH
#define TXT_ID_8_HEIGHT TXT_ID_4_HEIGHT

#define TXT_ID_12_X_LOCATION TXT_ID_5_X_LOCATION
#define TXT_ID_12_Y_LOCATION TXT_ID_5_Y_LOCATION
#define TXT_ID_12_WIDTH TXT_ID_6_WIDTH
#define TXT_ID_12_HEIGHT TXT_ID_4_HEIGHT

#define TXT_ID_13_X_LOCATION TXT_ID_5_X_LOCATION + TXT_ID_4_WIDTH
#define TXT_ID_13_Y_LOCATION TXT_ID_5_Y_LOCATION
#define TXT_ID_13_WIDTH TXT_ID_6_WIDTH
#define TXT_ID_13_HEIGHT TXT_ID_4_HEIGHT


#define FONT_COLOR_TEXT         C_WHITE
#define FILL_COLOR_TEXT         C_DODGER_BLUE
#define FONT_COLOR_BUTTON       C_YELLOW
#define FILL_COLOR_BUTTON       C_MEDIUM_BLUE
#define APP_STATE_COLORS        {C_SILVER, C_MEDIUM_SPRING_GREEN, C_DARK_GREEN, C_RED}
#define APP_STATE_FONT_COLORS   {C_BLACK, C_BLACK, C_YELLOW, C_YELLOW}
#define ON_OFF_COLORS           {C_SILVER, C_MEDIUM_BLUE}
#define ON_OFF_FONT_COLORS      {C_BLACK, C_YELLOW}

typedef enum {APP_STATE_IDLE, APP_STATE_ADVERTISING, APP_STATE_SCANNING, APP_STATE_CONNECTED, APP_STATE_DISCONNECTED} app_state_t;

//typedef enum {APP_PHY_CODED, APP_PHY_1M, APP_PHY_2M, APP_PHY_MULTI, APP_PHY_LIST_END} app_phy_t;
typedef enum {APP_PHY_CODED, APP_PHY_1M, APP_PHY_LIST_END} app_phy_t;

typedef struct {
        char *main_title;
        uint32_t phy;
        uint32_t tx_power;
        uint32_t app_state;
        uint16_t psr;
        bool led_on;
        bool button_pressed;
        int8_t rssi[3];
        bool trip_phy_connected[3];
        uint32_t throughput_kbps;
}app_display_content_t;

void app_display_init(app_display_content_t *initial_state);

void app_display_create_main_screen(app_display_content_t *content);

void app_display_update_main_screen(app_display_content_t *content);

void app_display_update(void);

#endif
