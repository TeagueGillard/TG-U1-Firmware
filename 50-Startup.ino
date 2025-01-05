// Core 1 runs Gamepad and HID
// Core 0 runs LEDS - Simhub will time out if LEDS are ran on core 1

  // Setup for usb HID
  #include <Adafruit_TinyUSB.h>
  uint8_t const desc_hid_report[] = { TUD_HID_REPORT_DESC_GAMEPAD() };                      // USB HID descriptor
  Adafruit_USBD_HID usb_hid;                                                                // Creates USB HID device called "usb_hid"
  hid_gamepad_report_t GP;                                                                  // Creates USB HID report called "GP"

  //PinSetup();                                                                             // Sets the pins to the correct pin modes
  bool SIMHUB = false;


// Setup for core 1
void setup1(){
  TinyUSBDevice.setManufacturerDescriptor(USB_Device_Manufacturer);
  TinyUSBDevice.setProductDescriptor(USB_Device_Name);
  TinyUSBDevice.setSerialDescriptor("0000001");
  TinyUSBDevice.setID(USB_VID, USB_PID);

  if (!TinyUSBDevice.isInitialized()){                                                      // Checks if the USB device is already initialized
    TinyUSBDevice.begin(0);                                                                 // Starts the USB device if not started
  }

  usb_hid.setPollInterval(2);                                                               // Sets USB HID poll interval (refresh rate)
  usb_hid.setReportDescriptor(desc_hid_report, sizeof(desc_hid_report));                    // Sets USB HID report descriptor to the one created above
  usb_hid.begin();                                                                          // Starts the HID device

  if (TinyUSBDevice.mounted()){                                                             // Checks if the device is already mounted and remounts it if needed
    TinyUSBDevice.detach();
    delay(50);
    TinyUSBDevice.attach();
  }
  if (Expander1_Enabled == 1 || Expander2_Enabled == 1 || Expander3_Enabled == 1 || Expander4_Enabled == 1)
  {
    ExpanderSetup();                                                                        // Runs the expander setup if expanders are used
  }

  ButtonSetup();
  
}



// Setup for core 0
void setup(){
  #include <Adafruit_NeoPixel.h>
  if (LED1_Enabled == 1 || LED2_Enabled == 1 || LED3_Enabled == 1 || LED4_Enabled == 1)     // Checks if LEDS are enabled
  {
	  LEDSetup();                                                                             // Runs the LED Setup
  }
    Serial.begin(115200);                                                                   // Starts serial communication
}



// Loop for core 1
void loop1(){

  #ifdef TINYUSB_NEEDPOLLING_TASK
  TinyUSBDevice.task();
  #endif

  if (!TinyUSBDevice.mounted()){
    return;
  }

  if (!usb_hid.ready()){
    return;
  }

  if (Expander1_Enabled == 1 || Expander2_Enabled == 1 || Expander3_Enabled == 1 || Expander4_Enabled == 1)
  {
    ExpanderLoop();                                                                         //  Runs the expander loop if expanders are enabled 
  }

  ButtonOutputs();
  usb_hid.sendReport(0, &GP, sizeof(GP));


}


// Loop for core 0
void loop(){

if (SIMHUB){
processCommands();
};

if (!SIMHUB){
  if (Serial.available()){
    String inputLEDString = Serial.readStringUntil('\n');

    if (inputLEDString.startsWith("SIMHUB")){
      SIMHUB = true;
    }

    int ledstrip = inputLEDString.substring(inputLEDString.indexOf("led:") + 5, inputLEDString.indexOf(",")).toInt();
    String inputString = inputLEDString.substring(inputLEDString.indexOf(",") + 2, inputLEDString.indexOf("ee"));
    
    if (inputString.startsWith("red:")) {
      switch (ledstrip){

        case 1:
          isRainbow1 = false;
        break;

        case 2:
          isRainbow2 = false;
        break;

        case 3:
          isRainbow3 = false;
        break;

        case 4:
          isRainbow4 = false;
        break;
      }
      int red = inputLEDString.substring(inputLEDString.indexOf("red:") + 5, inputLEDString.indexOf(",", inputLEDString.indexOf("red:"))).toInt();
      int green = inputLEDString.substring(inputLEDString.indexOf("green:") + 7, inputLEDString.indexOf(",", inputLEDString.indexOf("green:"))).toInt();
      int blue = inputLEDString.substring(inputLEDString.indexOf("blue:") + 6, inputLEDString.indexOf(",", inputLEDString.indexOf("blue:"))).toInt();
      setStaticColor(ledstrip, red, green, blue);
    }

    if (inputString.startsWith("rainbow_wave")){
      switch (ledstrip){
        case 1:
          isRainbow1 = true;
          rainbowWave1();
        break;

        case 2:
          isRainbow2 = true;
          rainbowWave2();
        break;

        case 3:
          isRainbow3 = true;
          rainbowWave3();
        break;

        case 4:
          isRainbow4 = true;
          rainbowWave4();
        break;
      }
    }
  }

  if (isRainbow1){
    rainbowWave1();
  }
  if (isRainbow2){
    rainbowWave2();
  }
  if (isRainbow3){
    rainbowWave3();
  }
  if (isRainbow4){
    rainbowWave4();
  }
}
}

