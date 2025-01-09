// USB/Device Setup
#define USB_Device_Name "TG - U1"	                      // Name of the device that will show in device manager etc
#define USB_Device_Manufacturer "Teague Gillard"        // Name of the maker that will show in device manager etc
#define USB_VID 0x6969					                        // USB VID used for Sim Hardware connection and SimHub LEDS
#define USB_PID 0x0211					                        // USB PID used for Sim Hardware connection and SimHub LEDS

// Button Setup
#define physical_Buttons 32                     // How many buttons are plugged in
#define virtual_Buttons 64                      // (Max 128) How many buttons will show in a game etc

// LED Strip 1
#define LED1_Enabled 1			                    // 1 if connected, 0 if disconnected
#define LED1_Num 60				                      // Number of LEDS connected to strip one
#define LED1_Pin 0			                        // Pin where LED1 strip is connected

// LED Strip 2
#define LED2_Enabled 1			                    // 1 if connected, 0 if disconnected
#define LED2_Num 30				                      // Number of LEDS connected to strip one
#define LED2_Pin 1			                        // Pin where LED2 strip is connected

// LED Strip 3
#define LED3_Enabled 1			                    // 1 if connected, 0 if disconnected
#define LED3_Num 1				                      // Number of LEDS connected to strip one
#define LED3_Pin 2				                      // Pin where LED3 strip is connected

// LED Strip 4
#define LED4_Enabled 1			                    // 1 if connected, 0 if disconnected
#define LED4_Num 1				                      // Number of LEDS connected to strip one
#define LED4_Pin 3				                      // Pin where LED4 strip is connected



// Encoder Setup - Push function is set the same as a normal button
#define Encoder1_Enabled 1		                  // 1 if connected, 0 if disconnected
#define Encoder1_Type "Incremental"             // Incremental for 2 outputs(clockwise and anti-clockwise) or Absolute(virtual rotary switch - 12 positions)
#define Encoder1_Time 100                       // How long(in ms) the button will be active for before refreshing
#define Encoder1_PinA Expander2_State[1]		    // Pin where Encoder pin A is connected
#define Encoder1_PinB Expander2_State[0]		    // Pin where the Encoder pin B is connected
#define Encoder1_IntPin Expander2_IntPin        // Either the Expander Interupt pin or the same as PinA

#define Encoder2_Enabled 1		                  // 1 if connected, 0 if disconnected
#define Encoder2_Type "Incremental"             // Incremental for 2 outputs(clockwise and anti-clockwise) or Absolute(virtual rotary switch - 12 positions)
#define Encoder2_Time 100                       // How long(in ms) the button will be active for before refreshing
#define Encoder2_PinA Expander2_State[3]		    // Pin where Encoder pin A is connected
#define Encoder2_PinB Expander2_State[2]		    // Pin where the Encoder pin B is connected
#define Encoder2_IntPin Expander2_IntPin        // Either the Expander Interupt pin or the same as PinA

#define Encoder3_Enabled 1		                  // 1 if connected, 0 if disconnected
#define Encoder3_Type "Incremental"             // Incremental for 2 outputs(clockwise and anti-clockwise) or Absolute(virtual rotary switch - 12 positions)
#define Encoder3_Time 100                       // How long(in ms) the button will be active for before refreshing
#define Encoder3_PinA Expander2_State[5]		    // Pin where Encoder pin A is connected
#define Encoder3_PinB Expander2_State[4] 	      // Pin where the Encoder pin B is connected
#define Encoder3_IntPin Expander2_IntPin        // Either the Expander Interupt pin or the same as PinA

#define Encoder4_Enabled 1		                  // 1 if connected, 0 if disconnected
#define Encoder4_Type "Incremental"             // Incremental for 2 outputs(clockwise and anti-clockwise) or Absolute(virtual rotary switch - 12 positions)
#define Encoder4_Time 100                       // How long(in ms) the button will be active for before refreshing
#define Encoder4_PinA Expander2_State[7]		    // Pin where Encoder pin A is connected
#define Encoder4_PinB Expander2_State[6]		    // Pin where the Encoder pin B is connected
#define Encoder4_IntPin Expander2_IntPin        // Either the Expander Interupt pin or the same as PinA

#define Encoder5_Enabled 1		                  // 1 if connected, 0 if disconnected
#define Encoder5_Type "Incremental"             // Incremental for 2 outputs(clockwise and anti-clockwise) or Absolute(virtual rotary switch - 12 positions)
#define Encoder5_Time 100                       // How long(in ms) the button will be active for before refreshing
#define Encoder5_PinA Expander2_State[9]		    // Pin where Encoder pin A is connected
#define Encoder5_PinB Expander2_State[8]		    // Pin where the Encoder pin B is connected
#define Encoder5_IntPin Expander2_IntPin        // Either the Expander Interupt pin or the same as PinA

#define Encoder6_Enabled 1		                  // 1 if connected, 0 if disconnected
#define Encoder6_Type "Incremental"             // Incremental for 2 outputs(clockwise and anti-clockwise) or Absolute(virtual rotary switch - 12 positions)
#define Encoder6_Time 100                       // How long(in ms) the button will be active for before refreshing
#define Encoder6_PinA Expander2_State[11]		    // Pin where Encoder pin A is connected
#define Encoder6_PinB Expander2_State[10]		    // Pin where the Encoder pin B is connected
#define Encoder6_IntPin Expander2_IntPin        // Either the Expander Interupt pin or the same as PinA

#define Encoder7_Enabled 1		                  // 1 if connected, 0 if disconnected
#define Encoder7_Type "Incremental"             // Incremental for 2 outputs(clockwise and anti-clockwise) or Absolute(virtual rotary switch - 12 positions)
#define Encoder7_Time 100                       // How long(in ms) the button will be active for before refreshing
#define Encoder7_PinA Expander2_State[13]		    // Pin where Encoder pin A is connected
#define Encoder7_PinB Expander2_State[12]		    // Pin where the Encoder pin B is connected
#define Encoder7_IntPin Expander2_IntPin        // Either the Expander Interupt pin or the same as PinA

#define Encoder8_Enabled 1		                  // 1 if connected, 0 if disconnected
#define Encoder8_Type "Incremental"             // Incremental for 2 outputs(clockwise and anti-clockwise) or Absolute(virtual rotary switch - 12 positions)
#define Encoder8_Time 100                       // How long(in ms) the button will be active for before refreshing
#define Encoder8_PinA Expander2_State[15]		    // Pin where Encoder pin A is connected
#define Encoder8_PinB Expander2_State[14]		    // Pin where the Encoder pin B is connected
#define Encoder8_IntPin Expander2_IntPin        // Either the Expander Interupt pin or the same as PinA



// 7-Way Switch 1 - This switch is set to POV0 so does not need to be set in 98-Button-Config
#define MWay1_Enabled 1			                    // 1 if connected, 0 if disconnected
#define MWay1_PinU Expander3_State[0]			      // Pin where the Up button press is connected
#define MWay1_PinL Expander3_State[1]			      // Pin where the Left button press is connected
#define MWay1_PinD Expander3_State[2]			      // Pin where the Down button press is connected
#define MWay1_PinR Expander3_State[3]			      // Pin where the Right button press is connected
#define MWay1_PinP Expander3_State[4]			      // Pin where the Push button press is connected
#define MWay1_PinA Expander3_State[5]			      // Pin where the Encoder pin A is connected
#define MWay1_PinB Expander3_State[6]			      // Pin where the Encoder pin B is connected
#define MWay1_Enc_Time 100                      // How long(in ms) the button will be active for before refreshing
#define MWay1_IntPin Expander3_IntPin           // Either the Expander Interupt pin or the same as PinA

// 7-Way Switch 2 - This switch is set to POV1 so does not need to be set in 98-Button-Config
#define MWay2_Enabled 1			                    // 1 if connected, 0 if disconnected
#define MWay2_PinL Expander3_State[7]			      // Pin where the Left button press is connected
#define MWay2_PinR Expander3_State[8]			      // Pin where the Right button press is connected
#define MWay2_PinU Expander3_State[9]			      // Pin where the Up button press is connected
#define MWay2_PinD Expander3_State[10]			    // Pin where the Down button press is connected
#define MWay2_PinP Expander3_State[11]			    // Pin where the Push button press is connected
#define MWay2_PinA Expander3_State[12]		      // Pin where the Encoder pin A is connected
#define MWay2_PinB Expander3_State[13]			    // Pin where the Encoder pin B is connected
#define MWay2_Enc_Time 100                      // How long(in ms) the button will be active for before refreshing
#define MWay2_IntPin Expander3_IntPin           // Either the Expander Interupt pin or the same as PinA



// Dual Clutch Setup
#define DualClutch_Enabled = 1;					        // 1 if connected, 0 if disconnected
#define DualClutch_MasterPin = 26;				      // Pin where the master clutch is connected
#define DualClutch_SlavePin = 27;				        // Pin where the slave clutch is connected
#define DualClutch_BiteAdjButton = B6;			    // Button to hold when adjusting the clutch bite point
// {EncoderX[Decrease], EncoderX[Increase]} You can also use buttons or anything else here, first value will decrease the bite point second will increase it
#define DualClutch_BiteAdj_10[2] = {Encoder1[0], Encoder1[1]};		   // Input that adjusts the bite point by 10%
#define DualClutch_BiteAdj_1[2] = {Encoder5[0], Encoder5[1]};		     // Input that adjusts the bite point by 1%



// Rotary Switch Setup  - For full config see tab 97-Rotary-Switch-Config
#define RotarySwitch1_Enabled 1
#define RotarySwitch1_Pin 28
const int RotarySwitch1_Pos1[2] = {0, 20};
const int RotarySwitch1_Pos2[2] = {93, 113};
const int RotarySwitch1_Pos3[2] = {180, 200};
const int RotarySwitch1_Pos4[2] = {276, 299};
const int RotarySwitch1_Pos5[2] = {350, 400};
const int RotarySwitch1_Pos6[2] = {430, 480};
const int RotarySwitch1_Pos7[2] = {530, 580};
const int RotarySwitch1_Pos8[2] = {600, 650};
const int RotarySwitch1_Pos9[2] = {700, 750};
const int RotarySwitch1_Pos10[2] = {800, 850};
const int RotarySwitch1_Pos11[2] = {900, 980};
const int RotarySwitch1_Pos12[2] = {1000, 1023};




// Extra Pins Setup




// Expander 1
#define Expander1_Enabled 1
#define Expander1_SDA "SDA"		                  // SDA if using SDA, SDA1 if using SDA2, only applys to DI & DO port expanders, analog port expanders are on SDA1
#define Expander1_IntPin 8		                  // Pin where the ident pin is connected
#define Expander1_Type "DI"		                  // DI for digital input, DO for digital outpout, AI for analog input
#define Expander1_Pins 16		                    // How many I/O pins are on the expander
#define Expander1_Address 0x24                  // The Addess of the shift register set by setting the Address pins to low or high

// Expander 2
#define Expander2_Enabled 1
#define Expander2_SDA "SDA"		                  // SDA if using SDA, SDA1 if using SDA2, only applys to DI & DO port expanders, analog port expanders are on SDA1
#define Expander2_IntPin 9		                  // Pin where the ident pin is connected
#define Expander2_Type "DI"		                  // DI for digital input, DO for digital outpout, AI for analog input
#define Expander2_Pins 16		                    // How many I/O pins are on the expander
#define Expander2_Address 0x21                  // The Addess of the shift register set by setting the Address pins to low or high

// Expander 3
#define Expander3_Enabled 1
#define Expander3_SDA "SDA"		                  // SDA if using SDA, SDA1 if using SDA2, only applys to DI & DO port expanders, analog port expanders are on SDA1
#define Expander3_IntPin 10		                  // Pin where the ident pin is connected
#define Expander3_Type "DI"		                  // DI for digital input, DO for digital outpout, AI for analog input
#define Expander3_Pins 16		                    // How many I/O pins are on the expander
#define Expander3_Address 0x22                  // The Addess of the shift register set by setting the Address pins to low or high

// Expander 4
#define Expander4_Enabled 1
#define Expander4_SDA "SDA1"		                // SDA if using SDA, SDA1 if using SDA2, only applys to DI & DO port expanders, analog port expanders are on SDA1
#define Expander4_IntPin 15	                    // Pin where the ident pin is connected
#define Expander4_Type "AI"		                  // DI for digital input, DO for digital outpout, AI for analog input
#define Expander4_Pins 4			                  // How many I/O pins are on the expander
#define Expander4_Address 0x48                  // The Addess of the shift register set by setting the Address pins to low or high