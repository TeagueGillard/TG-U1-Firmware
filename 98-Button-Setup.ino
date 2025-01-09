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
    Button[19] = Encoder2[0];
    Button[20] = Encoder2[1];
    Button[21] = Encoder3[0];
    Button[22] = Encoder3[1];
    Button[23] = Encoder4[0];
    Button[24] = Encoder4[1];
    Button[25] = Encoder5[0];
    Button[26] = Encoder5[1];
    Button[27] = Encoder6[0];
    Button[28] = Encoder6[1];
    Button[29] = Encoder7[0];
    Button[30] = Encoder7[1];
    Button[31] = Encoder8[0];
    Button[32] = Encoder8[1];

    Button[33] = RotarySwitch1[1];
    Button[34] = RotarySwitch1[2];
    Button[35] = RotarySwitch1[3];
    Button[36] = RotarySwitch1[4];
    Button[37] = RotarySwitch1[5];
    Button[38] = RotarySwitch1[6];
    Button[39] = RotarySwitch1[7];
    Button[40] = RotarySwitch1[8];
    Button[41] = RotarySwitch1[9];
    Button[42] = RotarySwitch1[10];
    Button[43] = RotarySwitch1[11];
    Button[44] = RotarySwitch1[12];

    Button[45] = MWay1_Push;
    Button[46] = MWay1_Enc[0];
    Button[47] = MWay1_Enc[1];

    Button[48] = MWay2_Push;
    Button[49] = MWay2_Enc[0];
    Button[50] = MWay2_Enc[1];

    

}



void ButtonSend()
{
    for (int i = 0; i < virtual_Buttons; i++)
    {
        if (Button[i] == true) {
            Joystick.setButton(i - 1, 1);  // Pressed button
        }
        else {
            Joystick.setButton(i - 1, 0);  // Not pressed button
        }

    }

    Joystick.setXAxis(analogRead(26));
    Joystick.setYAxis(analogRead(27));
    Joystick.setZAxis(analogRead(28));
    Joystick.setRxAxis(0);
    Joystick.setRyAxis(Expander4_A3);

    Joystick.sendState();
}