#include <Adafruit_NeoPixel.h>

	Adafruit_NeoPixel LED1(LED1_Num, LED1_Pin, NEO_GRB + NEO_KHZ800);       // Creates a new NeoPixel strip called LED1/2/3/4 and sets num of LEDS, pin num and led type (GRB for WS2812-B or RGB for WS2812-D)
	Adafruit_NeoPixel LED2(LED2_Num, LED2_Pin, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel LED3(LED3_Num, LED3_Pin, NEO_GRB + NEO_KHZ800);
	Adafruit_NeoPixel LED4(LED4_Num, LED4_Pin, NEO_GRB + NEO_KHZ800);

    uint8_t SH_R[LED1_Num + LED2_Num + LED3_Num + LED4_Num];
    uint8_t SH_G[LED1_Num + LED2_Num + LED3_Num + LED4_Num];
    uint8_t SH_B[LED1_Num + LED2_Num + LED3_Num + LED4_Num];
    uint8_t SH_R_Valid[LED1_Num + LED2_Num + LED3_Num + LED4_Num];
    uint8_t SH_G_Valid[LED1_Num + LED2_Num + LED3_Num + LED4_Num];
    uint8_t SH_B_Valid[LED1_Num + LED2_Num + LED3_Num + LED4_Num];

long globalTimer = 0;
uint8_t globalCounter = 0;
unsigned long globalClock;


void LEDSetup() 
{
	LED1.begin();                                                           // Starts LED strip 1/2/3/4
	LED2.begin();
	LED3.begin();
	LED4.begin();

  // Sets all LEDs to Black(Off) 
	for (int i = 0; i < LED1_Num; i++) {
		LED1.setPixelColor(i, 0, 0, 0);
	}
	LED1.show();

	for (int i = 0; i < LED2_Num; i++) {
		LED2.setPixelColor(i, 0, 0, 0);
	}
	LED2.show();

	for (int i = 0; i < LED3_Num; i++) {
		LED3.setPixelColor(i, 0, 0, 0);
	}
	LED3.show();

	for (int i = 0; i < LED4_Num; i++) {
		LED4.setPixelColor(i, 0, 0, 0);
	}
	LED4.show();

  delay(10);

  // Sets first LED to Red - Not Connected
	LED1.setPixelColor(1, 255, 0, 0);
	LED1.show();

  LED2.setPixelColor(1, 255, 0, 0);
	LED2.show();

	LED3.setPixelColor(1, 255, 0, 0);
	LED3.show();

	LED4.setPixelColor(1, 255, 0, 0);
	LED4.show();
}



void setStaticColor(int ledstrip, int red, int green, int blue){
  switch (ledstrip){
    case 1:
      // Set color for LED strip 1
      for (int i = 0; i < LED1_Num; i++){
        LED1.setPixelColor(i, LED1.Color(red, green, blue));
      }
      LED1.show();
    break;

    case 2:
      // Set color for LED strip 2
      for (int i = 0; i < LED2_Num; i++){
        LED2.setPixelColor(i, LED2.Color(red, green, blue));
      }
      LED2.show();
    break;

    case 3:
      // Set color for LED strip 3
      for (int i = 0; i < LED3_Num; i++){
        LED3.setPixelColor(i, LED3.Color(red, green, blue));
      }
      LED3.show();
    break;

    case 4:
      // Set color for LED strip 4
      for (int i = 0; i < LED4_Num; i++){
        LED4.setPixelColor(i, LED4.Color(red, green, blue));
      }
      LED4.show();
    break;

  }
}


const long interval = 20;
unsigned long previousMillis1 = 0;
unsigned long previousMillis2 = 0;
unsigned long previousMillis3 = 0;
unsigned long previousMillis4 = 0;

bool isRainbow1 = false;
bool isRainbow2 = false;
bool isRainbow3 = false;
bool isRainbow4 = false;

void rainbowWave1(){
  unsigned long currentMillis1 = millis();
  if (currentMillis1 - previousMillis1 >= interval) {
    previousMillis1 = currentMillis1;
      for (int i = 0; i < LED1_Num; i++){
        int colorWheel1_Position = (i * 256 / LED1_Num) + millis() / 10;
        LED1.setPixelColor(i, Wheel1(colorWheel1_Position & 255));
      }
      LED1.show();
  }
}
void rainbowWave2(){
  unsigned long currentMillis2 = millis();
  if (currentMillis2 - previousMillis2 >= interval) {
    previousMillis2 = currentMillis2;
      for (int i = 0; i < LED2_Num; i++){
        int colorWheel2_Position = (i * 256 / LED2_Num) + millis() / 10;
        LED2.setPixelColor(i, Wheel2(colorWheel2_Position & 255));
      }
      LED2.show();
  }
}
void rainbowWave3(){
  unsigned long currentMillis3 = millis();
  if (currentMillis3 - previousMillis3 >= interval) {
    previousMillis3 = currentMillis3;
      for (int i = 0; i < LED3_Num; i++){
        int colorWheel3_Position = (i * 256 / LED3_Num) + millis() / 10;
        LED3.setPixelColor(i, Wheel3(colorWheel3_Position & 255));
      }
      LED3.show();
  }
}
void rainbowWave4(){
  unsigned long currentMillis4 = millis();
  if (currentMillis4 - previousMillis4 >= interval) {
    previousMillis4 = currentMillis4;
      for (int i = 0; i < LED4_Num; i++){
        int colorWheel4_Position = (i * 256 / LED4_Num) + millis() / 10;
        LED4.setPixelColor(i, Wheel4(colorWheel4_Position & 255));
      }
      LED4.show();
  }
}


uint32_t Wheel1(byte WheelPos) {
  if (WheelPos < 85) {
    return LED1.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    return LED1.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
    WheelPos -= 170;
    return LED1.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}

uint32_t Wheel2(byte WheelPos) {
  if (WheelPos < 85) {
    return LED2.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    return LED2.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
    WheelPos -= 170;
    return LED2.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}

uint32_t Wheel3(byte WheelPos) {
  if (WheelPos < 85) {
    return LED3.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    return LED3.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
    WheelPos -= 170;
    return LED3.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}

uint32_t Wheel4(byte WheelPos) {
  if (WheelPos < 85) {
    return LED4.Color(WheelPos * 3, 255 - WheelPos * 3, 0);
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    return LED4.Color(255 - WheelPos * 3, 0, WheelPos * 3);
  } else {
    WheelPos -= 170;
    return LED4.Color(0, WheelPos * 3, 255 - WheelPos * 3);
  }
}




#define PROTOCOLVERSION "SIMHUB_1.0"

int messageend = 0;
String command = "";

int WaitAndReadOneByte() 
{
	while (!Serial.available()) {}
	return Serial.read();
}

void readStrip() 
{
	uint8_t r, g, b;

	for (uint16_t i = 0; i < LED1_Num; i++) 
	{
		r = WaitAndReadOneByte();
		g = WaitAndReadOneByte();
		b = WaitAndReadOneByte();

			SH_R[i] = r;
			SH_G[i] = g;
			SH_B[i] = b;
      LED1.setPixelColor(i, SH_R[i], SH_G[i], SH_B[i]);
	}

	for (uint16_t i = 0; i < LED2_Num; i++) 
	{
		r = WaitAndReadOneByte();
		g = WaitAndReadOneByte();
		b = WaitAndReadOneByte();

			SH_R[LED1_Num + i] = r;
			SH_G[LED1_Num + i] = g;
			SH_B[LED1_Num + i] = b;
      LED2.setPixelColor(i, SH_R[i], SH_G[i], SH_B[i]);

	}

	for (uint16_t i = 0; i < LED3_Num; i++) 
	{
		r = WaitAndReadOneByte();
		g = WaitAndReadOneByte();
		b = WaitAndReadOneByte();

			SH_R[LED1_Num + LED2_Num + i] = r;
			SH_G[LED1_Num + LED2_Num + i] = g;
			SH_B[LED1_Num + LED2_Num + i] = b;
      LED3.setPixelColor(i, SH_R[i], SH_G[i], SH_B[i]);
	
	}

	for (uint16_t i = 0; i < LED4_Num; i++) 
	{
		r = WaitAndReadOneByte();
		g = WaitAndReadOneByte();
		b = WaitAndReadOneByte();

			SH_R[LED1_Num + LED2_Num + LED3_Num + i] = r;
			SH_G[LED1_Num + LED2_Num + LED3_Num + i] = g;
			SH_B[LED1_Num + LED2_Num + LED3_Num + i] = b;
      LED4.setPixelColor(i, SH_R[i], SH_G[i], SH_B[i]);
			
	}
}


void readLeds() {

	readStrip();

// 3 bytes end of message, it must be (0xFF)(0xFE)(0xFD) to be taken into account, it's a super simple way to be sure we reached the correct end.
	bool valid = true;
	for (int i = 0; i < 3; i++) {
		valid = valid && (WaitAndReadOneByte() == 0xFF - i);
	
	}
	if (valid) 
	{
		for(int i = 0; i < LED1_Num + LED2_Num + LED3_Num + LED4_Num; i++ )
		{
			SH_R_Valid[i] = SH_R[i];
			SH_G_Valid[i] = SH_G[i];
			SH_B_Valid[i] = SH_B[i];
		}
  }
	LED1.show();
	LED2.show();
	LED3.show();
	LED4.show();
}

void getLedsCount(){
	uint8_t ledTotal = LED1_Num+LED2_Num+LED3_Num+LED4_Num;
	Serial.println(ledTotal);
}

void getProtocolVersion(){
	Serial.println(PROTOCOLVERSION);
}

void processCommands() 
{

	// Read data
	if (Serial.available()) 
	{
		
		char c = (char)Serial.read();

		if (messageend < 6) {
			if (c == (char)0xFF) {
				messageend++;
			}
			else {
				messageend = 0;
			}
		}

		if (messageend >= 3 && c != (char)(0xff)) {
			command += c;

			while (command.length() < 5) {
				c = WaitAndReadOneByte();
				command += c;
			}

			// Get protocol version
			// (0xFF)(0xFF)(0xFF)(0xFF)(0xFF)(0xFF)proto
			if (command == "proto") {
				getProtocolVersion();
			}

			// Get leds count
			// (0xFF)(0xFF)(0xFF)(0xFF)(0xFF)(0xFF)ledsc
			if (command == "ledsc") {
				getLedsCount();
			}

			// Send leds data (in binary) terminated by (0xFF)(0xFE)(0xFD)
			// (0xFF)(0xFF)(0xFF)(0xFF)(0xFF)(0xFF)sleds(RL1)(GL1)(BL1)(RL2)(GL2)(BL2) .... (0xFF)(0xFE)(0xFD)
			else if (command == "sleds") {
				readLeds(); 
			}

			command = "";
			messageend = 0;
		}


	}
}










