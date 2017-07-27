#include "satan.h"
#include "led.h"

/// ADD TO YOUR KEYBOARD.C file, below the #includes
extern uint32_t layer_state;


void matrix_init_kb(void) {
	// put your keyboard start-up code here
	// runs once when the firmware starts up
	matrix_init_user();
	led_init_ports();
};

void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)
	matrix_scan_user();
	uint8_t layer = biton32(layer_state);
	backlight_set(0);
	switch (layer) {
	case 1:
		led[7].r = 255;
		led[7].g = 0;
		led[7].b = 0;
		ws2812_setleds(led, 8);
		backlight_set(8);
		break;
	case 2:
		led[7].r = 0;
		led[7].g = 255;
		led[7].b = 0;
		ws2812_setleds(led, 8);
		break;
	case 3:
		led[7].r = 0;
		led[7].g = 0;
		led[7].b = 255;
		ws2812_setleds(led, 8);
		break;
	default:
		led[7].r = 0;
		led[7].g = 0;
		led[7].b = 0;
		ws2812_setleds(led, 8);
		break;
	}

};

void led_init_ports(void) {
    // * Set our LED pins as output
    DDRB |= (1<<2);
}

void led_set_kb(uint8_t usb_led) {
    if (usb_led & (1<<USB_LED_CAPS_LOCK)) {
        // Turn capslock on
        PORTB &= ~(1<<2);
    } else {
        // Turn capslock off
        PORTB |= (1<<2);
    }
}


