#include <Adafruit_NeoPixel.h>

void LEDSetup() {
	Adafruit_NeoPixel LED1(LED1_Num, LED1_Pin, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel LED2(LED2_Num, LED2_Pin, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel LED3(LED3_Num, LED3_Pin, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel LED4(LED4_Num, LED4_Pin, NEO_GRB + NEO_KHZ800);
	LED1.begin();
	LED2.begin();
	LED3.begin();
	LED4.begin();

	// Sets all LEDs to Red 
	for (int i = 0; i < LED1_Num; i++) {
		LED1.setPixelColor(i, 255, 0, 0);
	}
	LED1.show();
	for (int i = 0; i < LED2_Num; i++) {
		LED2.setPixelColor(i, 255, 0, 0);
	}
	LED2.show();
	for (int i = 0; i < LED3_Num; i++) {
		LED3.setPixelColor(i, 255, 0, 0);
	}
	LED3.show();
	for (int i = 0; i < LED4_Num; i++) {
		LED4.setPixelColor(i, 255, 0, 0);
	}
	LED4.show();
}