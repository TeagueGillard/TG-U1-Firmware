// Define you Extra inputs here, you can have as many as you like, just make sure you set them in 98-Button-Setup
// Example: bool ExtraInputName[1 for buttons / 2 for encoders] = {Default State(Normally 0)};
bool Extra_Encoder1[2] = {0};
bool Extra_Encoder2[2] = {0};
bool Extra_Encoder3[2] = {0};
bool Extra_Encoder4[2] = {0};
bool Bite_Enc_10[2] = {0};
bool Bite_Enc_1[2] = {0};



void RotarySwitchExtra()
{
  if (RotarySwitch1[1] == 1)
  {
    // Add anything you want to happen when the rotary switch is in pos1 here
    Extra_Encoder1[0] = Encoder1[0];            // Moves Encoder1 and Encoder 5 onto sperate bindings
    Extra_Encoder1[1] = Encoder1[1];            // so they can be used as bite point without doing other actions
    Extra_Encoder2[0] = Encoder5[0];            // or to get extra "Virtual" encoders from the same physical encoders
    Extra_Encoder2[1] = Encoder5[1];

    // Unused bindings
    Extra_Encoder3[0] = 0;                      // Sets other bindings for Encoder1 and Encoder 5 back to 0 so they no longer output
    Extra_Encoder3[1] = 0;                      // Do this in EVERY switch position for EVERY button/encoder to ensure correct opperation
    Extra_Encoder4[0] = 0;
    Extra_Encoder4[1] = 0;
    Bite_Enc_10[0] = 0;
    Bite_Enc_10[1] = 0;
    Bite_Enc_1[0] = 0;
    Bite_Enc_1[1] = 0;


  }
  if (RotarySwitch1[2] == 1)
  {
    // Add anything for pos2 etc
    Extra_Encoder3[0] = Encoder1[0];
    Extra_Encoder3[1] = Encoder1[1];
    Extra_Encoder4[0] = Encoder5[0];
    Extra_Encoder4[1] = Encoder5[1];

    // Unused Bindings
    Extra_Encoder1[0] = 0;
    Extra_Encoder1[1] = 0;
    Extra_Encoder2[0] = 0;
    Extra_Encoder2[1] = 0;
    Bite_Enc_10[0] = 0;
    Bite_Enc_10[1] = 0;
    Bite_Enc_1[0] = 0;
    Bite_Enc_1[1] = 0;
  }
  if (RotarySwitch1[3] == 1)
  {
    Bite_Enc_10[0] = Encoder1[0];
    Bite_Enc_10[1] = Encoder1[1];
    Bite_Enc_1[0] = Encoder5[0];
    Bite_Enc_1[1] = Encoder5[1];

    // Unused Bindings
    Extra_Encoder1[0] = 0;
    Extra_Encoder1[1] = 0;
    Extra_Encoder2[0] = 0;
    Extra_Encoder2[1] = 0;
    Extra_Encoder3[0] = 0;
    Extra_Encoder3[1] = 0;
    Extra_Encoder4[0] = 0;
    Extra_Encoder4[1] = 0;
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