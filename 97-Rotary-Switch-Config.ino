void RotarySwitchExtra()
{
  if (RotarySwitch1[1] == 1)
  {
    // Add anything you want to happen when the rotary switch is in pos1 here

  }
  if (RotarySwitch1[2] == 1)
  {
    // Add anything for pos2 etc

  }
  if (RotarySwitch1[3] == 1)
  {

  }
  if (RotarySwitch1[4] == 1)
  {

  }
  if (RotarySwitch1[5] == 1)
  {

  }
  if (RotarySwitch1[6] == 1)
  {

  }
  if (RotarySwitch1[7] == 1)
  {

  }
  if (RotarySwitch1[8] == 1)
  {

  }
  if (RotarySwitch1[9] == 1)
  {

  }
  if (RotarySwitch1[10] == 1)
  {

  }
  if (RotarySwitch1[11] == 1)
  {

  }
  if (RotarySwitch1[12] == 1)
  {

  }









}
void RotarySwitchLoop()
{
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos1[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos1[1]))
  {
    RotarySwitch1[1] = 1;
  } else {
    RotarySwitch1[1] = 0;
  }
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos2[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos2[1]))
  {
    RotarySwitch1[2] = 1;
  } else {
    RotarySwitch1[2] = 0;
  }
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos3[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos3[1]))
  {
    RotarySwitch1[3] = 1;
  } else {
    RotarySwitch1[3] = 0;
  }
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos4[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos4[1]))
  {
    RotarySwitch1[4] = 1;
  } else {
    RotarySwitch1[4] = 0;
  }
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos5[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos5[1]))
  {
    RotarySwitch1[5] = 1;
  } else {
    RotarySwitch1[5] = 0;
  }
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos6[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos6[1]))
  {
    RotarySwitch1[6] = 1;
  } else {
    RotarySwitch1[6] = 0;
  }
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos7[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos7[1]))
  {
    RotarySwitch1[7] = 1;
  } else {
    RotarySwitch1[7] = 0;
  }
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos8[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos8[1]))
  {
    RotarySwitch1[8] = 1;
  } else {
    RotarySwitch1[8] = 0;
  }
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos9[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos9[1]))
  {
    RotarySwitch1[9] = 1;
  } else {
    RotarySwitch1[9] = 0;
  }
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos10[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos10[1]))
  {
    RotarySwitch1[10] = 1;
  } else {
    RotarySwitch1[10] = 0;
  }
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos11[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos11[1]))
  {
    RotarySwitch1[11] = 1;
  } else {
    RotarySwitch1[11] = 0;
  }
  if ((analogRead(RotarySwitch1_Pin) > RotarySwitch1_Pos12[0] && analogRead(RotarySwitch1_Pin) < RotarySwitch1_Pos12[1]))
  {
    RotarySwitch1[12] = 1;
  } else {
    RotarySwitch1[12] = 0;
  }

}