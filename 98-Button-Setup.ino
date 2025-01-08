void ButtonLoop()
{
    // Button[ButtonNumber up to 128] = WhatTheButtonIsConnectedTo[ConnectedButtonNumber];
    Button[1] = Expander1_State[0];
    Button[2] = Expander1_State[1];
    Button[3] = Expander1_State[2];
    Button[4] = Expander1_State[3];
    Button[5] = Expander1_State[4];
    Button[6] = Expander1_State[5];
    Button[7] = Expander1_State[6];
    Button[8] = Expander1_State[7];
    Button[9] = Expander1_State[8];
    Button[10] = Expander1_State[9];
    Button[11] = Expander1_State[10];
    Button[12] = Expander1_State[11];
    Button[13] = Expander1_State[12];
    Button[14] = Expander1_State[13];
    Button[15] = Expander1_State[14];
    Button[16] = Expander1_State[15];

    Button[17] = Encoder1[0];
    Button[18] = Encoder1[1];

}



void ButtonSend()
{
    for (int i = 0; i < virtual_Buttons; i++)
    {
        if (Button[i] == true) {
            Joystick.setButton(i - 1, 0);  // Pressed button
        }
        else {
            Joystick.setButton(i - 1, 1);  // Not pressed button
        }

    }

    Joystick.setXAxis(analogRead(26));
    Joystick.setYAxis(analogRead(27));
    Joystick.setZAxis(analogRead(28));
    Joystick.setRxAxis(0);
    Joystick.setRyAxis(Expander4_A3);

    Joystick.sendState();
}