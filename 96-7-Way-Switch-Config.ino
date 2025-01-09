bool MWay1_Enc[2] = {0};
bool MWay2_Enc[2] = {0};
unsigned long MWay1_PreMillis = 0;
bool MWay1_PinA_LastState = 0;
void MWaySwitchLoop()
{
  if (MWay1_Enabled == 1)
  {
    if (MWay1_PinU == 1)
    {
      Joystick.setHatSwitch(0, 0);
    }
    if (MWay1_PinL == 1)
    {
      Joystick.setHatSwitch(0, 270);
    }
    if (MWay1_PinD == 1)
    {
      Joystick.setHatSwitch(0, 180);
    }
    if (MWay1_PinR == 1)
    {
      Joystick.setHatSwitch(0, 90);
    }
    if (MWay1_PinU == 0 && MWay1_PinL == 0 && MWay1_PinD == 0 && MWay1_PinR == 0)
    {
      Joystick.setHatSwitch(0, -1);
    }
    if (MWay1_PinU == 0 && MWay1_PinL == 0 && MWay1_PinD == 0 && MWay1_PinR == 0 && MWay1_PinP == 1)
    {
      MWay1_Push = 1;
    } else {
      MWay1_Push = 0;
    }

    if (digitalRead(MWay1_IntPin) == LOW)
    {
      int MWay1_PinA_State = MWay1_PinA;
      unsigned long MWay1_Millis = millis();
      if ((MWay1_Millis - MWay1_PreMillis) >= MWay1_Enc_Time)
      {
        if (MWay1_PinA_State != MWay1_PinA_LastState)
        {
          MWay1_PreMillis = MWay1_Millis;
          if (MWay1_PinB != MWay1_PinA_State)
          {
            MWay1_Enc[0] = 0;
            MWay1_Enc[1] = 1;
            MWay1_Enc_Inv = 1;
          } else {
            MWay1_Enc[0] = 1;
            MWay1_Enc[1] = 0;
            MWay1_Enc_Inv = 1;
          }
        } else {
        MWay1_Enc[0] = 0;
        MWay1_Enc[1] = 0;
        }
      }
      MWay1_PinA_LastState = MWay1_PinA_State;
    }
  }

  if (MWay2_Enabled == 1)
  {
    if (MWay2_PinU == 1)
    {
      Joystick.setHatSwitch(1, 0);
    }
    if (MWay2_PinL == 1)
    {
      Joystick.setHatSwitch(1, 270);
    }
    if (MWay2_PinD == 1)
    {
      Joystick.setHatSwitch(1, 180);
    }
    if (MWay2_PinR == 1)
    {
      Joystick.setHatSwitch(1, 90);
    }
    if (MWay2_PinU == 0 && MWay2_PinL == 0 && MWay2_PinD == 0 && MWay2_PinR == 0)
    {
      Joystick.setHatSwitch(1, -1);
    }
    if (MWay2_PinU == 0 && MWay2_PinL == 0 && MWay2_PinD == 0 && MWay2_PinR == 0 && MWay2_PinP == 1)
    {
      MWay2_Push = 1;
    } else {
      MWay2_Push = 0;
    }
  }

}