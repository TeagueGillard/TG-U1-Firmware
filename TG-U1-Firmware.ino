// USB/Device Setup
#define USB_Device_Name "TG - U1"	                      // Name of the device that will show in device manager etc
#define USB_Device_Manufacturer "Teague Gillard"        // Name of the maker that will show in device manager etc
#define USB_VID 0x6969					                        // USB VID used for Sim Hardware connection and SimHub LEDS
#define USB_PID 0x0211					                        // USB PID used for Sim Hardware connection and SimHub LEDS



// LED Strip 1
#define LED1_Enabled 1			                    // 1 if connected, 0 if disconnected
#define LED1_Num 30				                      // Number of LEDS connected to strip one
#define LED1_Pin 0			                        // Pin where LED1 strip is connected

// LED Strip 2
#define LED2_Enabled 1			                    // 1 if connected, 0 if disconnected
#define LED2_Num 30				                      // Number of LEDS connected to strip one
#define LED2_Pin 1			                        // Pin where LED2 strip is connected

// LED Strip 3
#define LED3_Enabled 1			                    // 1 if connected, 0 if disconnected
#define LED3_Num 30				                      // Number of LEDS connected to strip one
#define LED3_Pin 2				                      // Pin where LED3 strip is connected

// LED Strip 4
#define LED4_Enabled 1			                    // 1 if connected, 0 if disconnected
#define LED4_Num 30				                      // Number of LEDS connected to strip one
#define LED4_Pin 3				                      // Pin where LED4 strip is connected



// Encoder Setup
#define Encoder1_Enabled = 1;		                // 1 if connected, 0 if disconnected
#define Encoder1_PinA = E2-1;		                // Pin where Encoder pin A is connected
#define Encoder1_PinB = E2-2;		                // Pin where the Encoder pin B is connected

#define Encoder2_Enabled = 1;		                // 1 if connected, 0 if disconnected
#define Encoder2_PinA = E2-3;		                // Pin where Encoder pin A is connected
#define Encoder2_PinB = E2-4;		                // Pin where the Encoder pin B is connected

#define Encoder3_Enabled = 1;		                // 1 if connected, 0 if disconnected
#define Encoder3_PinA = E2-5;		                // Pin where Encoder pin A is connected
#define Encoder3_PinB = E2-6;		                // Pin where the Encoder pin B is connected

#define Encoder4_Enabled = 1;		                // 1 if connected, 0 if disconnected
#define Encoder4_PinA = E2-7;		                // Pin where Encoder pin A is connected
#define Encoder4_PinB = E2-8;		                // Pin where the Encoder pin B is connected

#define Encoder5_Enabled = 1;		                // 1 if connected, 0 if disconnected
#define Encoder5_PinA = E2-9;		                // Pin where Encoder pin A is connected
#define Encoder5_PinB = E2-10;		              // Pin where the Encoder pin B is connected

#define Encoder6_Enabled = 1;		                // 1 if connected, 0 if disconnected
#define Encoder6_PinA = E2-11;		              // Pin where Encoder pin A is connected
#define Encoder6_PinB = E2-12;		              // Pin where the Encoder pin B is connected

#define Encoder7_Enabled = 1;		                // 1 if connected, 0 if disconnected
#define Encoder7_PinA = E2-13;		              // Pin where Encoder pin A is connected
#define Encoder7_PinB = E2-14;		              // Pin where the Encoder pin B is connected

#define Encoder8_Enabled = 1;		                // 1 if connected, 0 if disconnected
#define Encoder8_PinA = E2-15;		              // Pin where Encoder pin A is connected
#define Encoder8_PinB = E2-16;		              // Pin where the Encoder pin B is connected



// 7-Way Switch 1
#define MWay1_Enabled = 1;			                // 1 if connected, 0 if disconnected
#define MWay1_PinL = E3-1;			                // Pin where the Left button press is connected
#define MWay1_PinR = E3-2;			                // Pin where the Right button press is connected
#define MWay1_PinU = E3-3;			                // Pin where the Up button press is connected
#define MWay1_PinD = E3-4;			                // Pin where the Down button press is connected
#define MWay1_PinA = E3-5;			                // Pin where the Encoder pin A is connected
#define MWay1_PinB = E3-6;			                // Pin where the Encoder pin B is connected
#define MWay1_PinP = E3-7;			                // Pin where the Push button press is connected

// 7-Way Switch 2
#define MWay2_Enabled = 1;			                // 1 if connected, 0 if disconnected
#define MWay2_PinL = E3-8;			                // Pin where the Left button press is connected
#define MWay2_PinR = E3-9;			                // Pin where the Right button press is connected
#define MWay2_PinU = E3-10;			                // Pin where the Up button press is connected
#define MWay2_PinD = E3-11;			                // Pin where the Down button press is connected
#define MWay2_PinA = E3-12;			                // Pin where the Encoder pin A is connected
#define MWay2_PinB = E3-13;			                // Pin where the Encoder pin B is connected
#define MWay2_PinP = E3-14;			                // Pin where the Push button press is connected



// Dual Clutch Setup
#define DualClutch_Enabled = 1;					        // 1 if connected, 0 if disconnected
#define DualClutch_MasterPin = A0;				      // Pin where the master clutch is connected
#define DualClutch_SlavePin = A1;				        // Pin where the slave clutch is connected
#define DualClutch_BiteAdjButton = B6;			    // Button to hold when adjusting the clutch bite point
#define DualClutch_BiteAdj_10_ENC = Enc1;		    // Encoder that adjusts the bite point by 10%
#define DualClutch_BiteAdj_1_ENC = Enc2;		    // Encoder that adjusts the bite point by 1%



// Rotary Switch Setup
#define RotarySwitch1_Enabled = 1;
#define RotarySwitch1_Pin = A2;



// Extra Pins Setup




// Expander 1
#define Expander1_Enabled 1
#define Expander1_SDA "SDA"		                  // SDA if using SDA, SDA1 if using SDA2
#define Expander1_SCL "SCL"		                  // SCL if using SCL, SCL1 if using SCL2
#define Expander1_IntPin 7		                  // Pin where the ident pin is connected
#define Expander1_Type "DI"		                  // DI for digital input, DO for digital outpout, AI for analog input
#define Expander1_Pins 16		                    // How many I/O pins are on the expander
#define Expander1_Address 0x24                  // The Addess of the shift register set by setting the Address pins to low or high

// Expander 2
#define Expander2_Enabled 1
#define Expander2_SDA "SDA"		                  // SDA if using SDA, SDA1 if using SDA2
#define Expander2_SCL "SCL"		                  // SCL if using SCL, SCL1 if using SCL2
#define Expander2_IntPin 8		                  // Pin where the ident pin is connected
#define Expander2_Type "DI"		                  // DI for digital input, DO for digital outpout, AI for analog input
#define Expander2_Pins 16		                    // How many I/O pins are on the expander
#define Expander2_Address 0x21                  // The Addess of the shift register set by setting the Address pins to low or high

// Expander 3
#define Expander3_Enabled 1
#define Expander3_SDA "SDA"		                  // SDA if using SDA, SDA1 if using SDA2
#define Expander3_SCL "SCL"		                  // SCL if using SCL, SCL1 if using SCL2
#define Expander3_IntPin 9		                  // Pin where the ident pin is connected
#define Expander3_Type "DI"		                  // DI for digital input, DO for digital outpout, AI for analog input
#define Expander3_Pins 16		                    // How many I/O pins are on the expander
#define Expander3_Address 0x22                  // The Addess of the shift register set by setting the Address pins to low or high

// Expander 4
#define Expander4_Enabled 1
#define Expander4_SDA "SDA1"		                // SDA if using SDA, SDA1 if using SDA2
#define Expander4_SCL "SCL1"		                // SCL if using SCL, SCL1 if using SCL2
#define Expander4_IntPin 15	                    // Pin where the ident pin is connected
#define Expander4_Type "AI"		                  // DI for digital input, DO for digital outpout, AI for analog input
#define Expander4_Pins 4			                  // How many I/O pins are on the expander
#define Expander4_Address 0x48                  // The Addess of the shift register set by setting the Address pins to low or high