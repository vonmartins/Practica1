#include <Arduino.h>
#define LED_BUILTIN 23
#define DELAY 1000
uint32_t *gpio_out = (uint32_t *)GPIO_OUT_REG;


void setup() {
    pinMode (LED_BUILTIN, OUTPUT);
    Serial.begin(115200);
}

void loop () {
    
    *gpio_out |= (1 << LED_BUILTIN);
    ets_delay_us (500);
    *gpio_out ^= (1 << LED_BUILTIN);
    ets_delay_us (500);
}

// void loop () {
    // uint32_t *gpio_out = (uint32_t *)GPIO_OUT_REG;
    
//     digitalWrite(LED_BUILTIN, HIGH);
//     // *gpio_out |= (1 << LED_BUILTIN);
//     // Serial.println("ON");
//     ets_delay_us (500);
//     // delay(DELAY);
//     digitalWrite(LED_BUILTIN, LOW);
//     // *gpio_out ^= (1 << LED_BUILTIN);
//     // Serial.println("OFF");
//     ets_delay_us (500);
//     // delay(DELAY);
// }