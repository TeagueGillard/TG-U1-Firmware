void ButtonSetup()
{
    // Button[ButtonNumber up to 128] = WhatTheButtonIsConnectedTo[ConnectedButtonNumber];
    Button[0] = buttonState1[0];
    Button[1] = buttonState1[1];
    Button[2] = buttonState1[2];
    Button[3] = buttonState1[3];
    Button[4] = buttonState1[4];
    Button[5] = buttonState1[5];
    Button[6] = buttonState1[6];
    Button[7] = buttonState1[7];
    Button[8] = buttonState1[8];
    Button[9] = buttonState1[9];
    Button[10] = buttonState1[10];
    Button[11] = buttonState1[11];
    Button[12] = buttonState1[12];
    Button[13] = buttonState1[13];
    Button[14] = buttonState1[14];
    Button[15] = buttonState1[15];
}



void ButtonOutputs()
{
    for (int i = 0; i < 16; i++)
    {
        if (buttonState1[i] == true) {
            Joystick.setButton(i, 0);  // Pressed button
        }
        else {
            Joystick.setButton(i, 1);  // Not pressed button
        }
        if (buttonState2[i] == true) {
            Joystick.setButton(i + 16, 0);  // Pressed button
        }
        else {
            Joystick.setButton(i + 16, 1);  // Not pressed button
        }
        if (buttonState3[i] == true) {
            Joystick.setButton(i + 32, 0);  // Pressed button
        }
        else {
            Joystick.setButton(i + 32, 1);  // Not pressed button
        }
    }



    Joystick.setXAxis(analogRead(26));
    Joystick.setYAxis(analogRead(27));
    Joystick.setZAxis(analogRead(28));
    Joystick.setRxAxis(0);
    Joystick.setRyAxis(Expander4_A3);

}