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

    Button[17] = Extra_Encoder1[0];
    Button[18] = Extra_Encoder1[1];
    Button[19] = Encoder2[0];
    Button[20] = Encoder2[1];
    Button[21] = Encoder3[0];
    Button[22] = Encoder3[1];
    Button[23] = Encoder4[0];
    Button[24] = Encoder4[1];
    Button[25] = Extra_Encoder2[0];
    Button[26] = Extra_Encoder2[1];
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

    Button[51] = Extra_Encoder3[0];
    Button[52] = Extra_Encoder3[1];
    Button[53] = Extra_Encoder4[0];
    Button[54] = Extra_Encoder4[1];

    Button[55] = Encoder1Abs[1];
    Button[56] = Encoder1Abs[2];
    Button[57] = Encoder1Abs[3];
    Button[58] = Encoder1Abs[4];
    Button[59] = Encoder1Abs[5];
    Button[60] = Encoder1Abs[6];
    Button[61] = Encoder1Abs[7];
    Button[62] = Encoder1Abs[8];
    Button[63] = Encoder1Abs[9];
    Button[64] = Encoder1Abs[10];
    Button[65] = Encoder1Abs[11];
    Button[66] = Encoder1Abs[12];

    Button[67] = Encoder5Abs[1];
    Button[68] = Encoder5Abs[2];
    Button[69] = Encoder5Abs[3];
    Button[70] = Encoder5Abs[4];
    Button[71] = Encoder5Abs[5];
    Button[72] = Encoder5Abs[6];
    Button[73] = Encoder5Abs[7];
    Button[74] = Encoder5Abs[8];
    Button[75] = Encoder5Abs[9];
    Button[76] = Encoder5Abs[10];
    Button[77] = Encoder5Abs[11];
    Button[78] = Encoder5Abs[12];

    Button[79] = 0;
    Button[80] = 0;
    Button[81] = 0;
    Button[82] = 0;
    Button[83] = 0;
    Button[84] = 0;
    Button[85] = 0;
    Button[86] = 0;
    Button[87] = 0;
    Button[88] = 0;
    Button[89] = 0;
    Button[90] = 0;
    Button[91] = 0;
    Button[92] = 0;
    Button[93] = 0;
    Button[94] = 0;
    Button[95] = 0;
    Button[96] = 0;
    Button[97] = 0;
    Button[98] = 0;
    Button[99] = 0;
    Button[100] = 0;
    Button[101] = 0;
    Button[102] = 0;
    Button[103] = 0;
    Button[104] = 0;
    Button[105] = 0;
    Button[106] = 0;
    Button[107] = 0;
    Button[108] = 0;
    Button[109] = 0;
    Button[110] = 0;
    Button[111] = 0;
    Button[112] = 0;
    Button[113] = 0;
    Button[114] = 0;
    Button[115] = 0;
    Button[116] = 0;
    Button[117] = 0;
    Button[118] = 0;
    Button[119] = 0;
    Button[120] = 0;
    Button[121] = 0;
    Button[122] = 0;
    Button[123] = 0;
    Button[124] = 0;
    Button[125] = 0;
    Button[126] = 0;
    Button[127] = 0;
    Button[128] = 0;


    

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

    Joystick.setXAxis(0);
    Joystick.setYAxis(0);
    Joystick.setZAxis(DualClutchValue);
    Joystick.setRxAxis(0);
    Joystick.setRyAxis(0);
    Joystick.setRzAxis(BitePoint * 10);

    Joystick.sendState();
}