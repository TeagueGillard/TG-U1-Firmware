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