void ButtonSetup()
{
    Button[1] = buttonState1[0];
    Button[2] = buttonState1[1];
    Button[3] = buttonState1[2];
    Button[4] = buttonState1[3];
    Button[5] = buttonState1[4];
    Button[6] = buttonState1[5];
    Button[7] = buttonState1[6];
    Button[8] = buttonState1[7];
    Button[9] = buttonState1[8];
    Button[10] = buttonState1[9];
    Button[11] = buttonState1[10];
    Button[12] = buttonState1[11];
    Button[13] = buttonState1[12];
    Button[14] = buttonState1[13];
    Button[15] = buttonState1[14];
    Button[16] = buttonState1[15];
}






void ButtonOutputs()
{
    for (int i = 0; i < sizeof(Button); i++)
    {
        if (Button[i] == true)
        {
            Joystick.setButton(i, 1);
        }
        else {
            Joystick.setButton(i, 0);
        }

    }

}