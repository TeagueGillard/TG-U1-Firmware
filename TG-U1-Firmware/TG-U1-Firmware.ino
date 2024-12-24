PreSetup();

///// USB/Device Setup
USB_Device_Name = "TG - U1";	// Name of the device that will show in device manager etc
USB_VID = 6969;					// USB VID used for Sim Hardware connection and SimHub LEDS
USB_PID = 0211;					// USB PID used for Sim Hardware connection and SimHub LEDS



///// LED Setup

// LED Strip 1
LED1_Enabled = 1;			// 1 if connected, 0 if disconnected
LED1_Num = 30;				// Number of LEDS connected to strip one
LED1_Pin = 1;				// Pin where LED1 strip is connected

// LED Strip 2
LED2_Enabled = 1;			// 1 if connected, 0 if disconnected
LED2_Num = 30;				// Number of LEDS connected to strip one
LED2_Pin = 2;				// Pin where LED2 strip is connected

// LED Strip 3
LED3_Enabled = 1;			// 1 if connected, 0 if disconnected
LED3_Num = 30;				// Number of LEDS connected to strip one
LED3_Pin = 3;				// Pin where LED3 strip is connected

// LED Strip 4
LED4_Enabled = 1;			// 1 if connected, 0 if disconnected
LED4_Num = 30;				// Number of LEDS connected to strip one
LED4_Pin = 4;				// Pin where LED4 strip is connected



///// Button Setup
Button1_Enabled = 1;		// 1 if connected, 0 if disconnected
Button1_Pin = E1-1;			// Pin where Button1 is connected



///// Encoder Setup
Encoder1_Enabled = 1;		// 1 if connected, 0 if disconnected
Encoder1_PinA = E2-1;		// Pin where Encoder pin A is connected
Encoder1_PinB = E2-2;		// Pin where the Encoder pin B is connected

Encoder2_Enabled = 1;		// 1 if connected, 0 if disconnected
Encoder2_PinA = E2-3;		// Pin where Encoder pin A is connected
Encoder2_PinB = E2-4;		// Pin where the Encoder pin B is connected

Encoder3_Enabled = 1;		// 1 if connected, 0 if disconnected
Encoder3_PinA = E2-5;		// Pin where Encoder pin A is connected
Encoder3_PinB = E2-6;		// Pin where the Encoder pin B is connected

Encoder4_Enabled = 1;		// 1 if connected, 0 if disconnected
Encoder4_PinA = E2-7;		// Pin where Encoder pin A is connected
Encoder4_PinB = E2-8;		// Pin where the Encoder pin B is connected

Encoder5_Enabled = 1;		// 1 if connected, 0 if disconnected
Encoder5_PinA = E2-9;		// Pin where Encoder pin A is connected
Encoder5_PinB = E2-10;		// Pin where the Encoder pin B is connected

Encoder6_Enabled = 1;		// 1 if connected, 0 if disconnected
Encoder6_PinA = E2-11;		// Pin where Encoder pin A is connected
Encoder6_PinB = E2-12;		// Pin where the Encoder pin B is connected

Encoder7_Enabled = 1;		// 1 if connected, 0 if disconnected
Encoder7_PinA = E2-13;		// Pin where Encoder pin A is connected
Encoder7_PinB = E2-14;		// Pin where the Encoder pin B is connected

Encoder8_Enabled = 1;		// 1 if connected, 0 if disconnected
Encoder8_PinA = E2-15;		// Pin where Encoder pin A is connected
Encoder8_PinB = E2-16;		// Pin where the Encoder pin B is connected



///// 7-Way Switch Setup

// 7-Way Switch 1
7Way1_Enabled = 1;			// 1 if connected, 0 if disconnected
7Way1_PinL = E3-1;			// Pin where the Left button press is connected
7Way1_PinR = E3-2;			// Pin where the Right button press is connected
7Way1_PinU = E3-3;			// Pin where the Up button press is connected
7Way1_PinD = E3-4;			// Pin where the Down button press is connected
7Way1_PinA = E3-5;			// Pin where the Encoder pin A is connected
7Way1_PinB = E3-6;			// Pin where the Encoder pin B is connected
7Way1_PinP = E3-7;			// Pin where the Push button press is connected

// 7-Way Switch 2
7Way2_Enabled = 1;			// 1 if connected, 0 if disconnected
7Way2_PinL = E3-8;			// Pin where the Left button press is connected
7Way2_PinR = E3-9;			// Pin where the Right button press is connected
7Way2_PinU = E3-10;			// Pin where the Up button press is connected
7Way2_PinD = E3-11;			// Pin where the Down button press is connected
7Way2_PinA = E3-12;			// Pin where the Encoder pin A is connected
7Way2_PinB = E3-13;			// Pin where the Encoder pin B is connected
7Way2_PinP = E3-14;			// Pin where the Push button press is connected



///// Dual Clutch Setup
DualClutch_Enabled = 1;					// 1 if connected, 0 if disconnected
DualClutch_MasterPin = A0;				// Pin where the master clutch is connected
DualClutch_SlavePin = A1;				// Pin where the slave clutch is connected
DualClutch_BiteAdjButton = B6;			// Button to hold when adjusting the clutch bite point
DualClutch_BiteAdj-10-ENC = Enc1;		// Encoder that adjusts the bite point by 10%
DualClutch_BiteAdj-1-ENC = Enc2;		// Encoder that adjusts the bite point by 1%



///// Rotary Switch Setup
RotarySwitch1_Enabled = 1;
RotarySwitch1_Pin = A2;



///// Extra Pins Setup




///// Port Expander Setup

// Expander 1
Expander1_Enabled = 1;
Expander1_SDA = SDA1;		// SDA1 if using SDA, SDA2 if using SDA2
Expander1_SCL = SCL1;		// SCL1 if using SCL, SCL2 if using SCL2
Expander1_IdentPin = 7;		// Pin where the ident pin is connected
Expander1_Type = DI;		// DI for digital input, DO for digital outpout, AI for analog input
Expander1_Pins = 16;		// How many I/O pins are on the expander

// Expander 2
Expander2_Enabled = 1;
Expander2_SDA = SDA1;		// SDA1 if using SDA, SDA2 if using SDA2
Expander2_SCL = SCL1;		// SCL1 if using SCL, SCL2 if using SCL2
Expander2_IdentPin = 8;		// Pin where the ident pin is connected
Expander2_Type = DI;		// DI for digital input, DO for digital outpout, AI for analog input
Expander2_Pins = 16;		// How many I/O pins are on the expander

// Expander 3
Expander3_Enabled = 1;
Expander3_SDA = SDA1;		// SDA1 if using SDA, SDA2 if using SDA2
Expander3_SCL = SCL1;		// SCL1 if using SCL, SCL2 if using SCL2
Expander3_IdentPin = 9;		// Pin where the ident pin is connected
Expander3_Type = DI;		// DI for digital input, DO for digital outpout, AI for analog input
Expander3_Pins = 16;		// How many I/O pins are on the expander

// Expander 4
Expander4_Enabled = 1;
Expander4_SDA = SDA2;		// SDA1 if using SDA, SDA2 if using SDA2
Expander4_SCL = SCL2;		// SCL1 if using SCL, SCL2 if using SCL2
Expander4_IdentPin = 15;	// Pin where the ident pin is connected
Expander4_Type = AI;		// DI for digital input, DO for digital outpout, AI for analog input
Expander4_Pins = 4;			// How many I/O pins are on the expander



if (LED1_Enable == 1, LED2_Enable == 1, LED3_Enable == 1, LED4_Enable == 1){
	LEDSetup();
}

Setup();
Loop();

Adafruit_NeoPixel LED1(LED1_Num, LED1_Pin, NEO_GRB + NEO_KHZ800);