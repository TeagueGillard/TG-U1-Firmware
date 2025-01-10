int encoder1_PinA_LastState = 0;
unsigned long encoder1_PreMillis = 0;

int encoder2_PinA_LastState = 0;
unsigned long encoder2_PreMillis = 0;

int encoder3_PinA_LastState = 0;
unsigned long encoder3_PreMillis = 0;

int encoder4_PinA_LastState = 0;
unsigned long encoder4_PreMillis = 0;

int encoder5_PinA_LastState = 0;
unsigned long encoder5_PreMillis = 0;

int encoder6_PinA_LastState = 0;
unsigned long encoder6_PreMillis = 0;

int encoder7_PinA_LastState = 0;
unsigned long encoder7_PreMillis = 0;

int encoder8_PinA_LastState = 0;
unsigned long encoder8_PreMillis = 0;


bool Encoder1[2];
bool Encoder2[2];
bool Encoder3[2];
bool Encoder4[2];
bool Encoder5[2];
bool Encoder6[2];
bool Encoder7[2];
bool Encoder8[2];
bool Encoder1Abs[Encoder1_Absolute_Pos + 1];
bool Encoder2Abs[Encoder2_Absolute_Pos + 1];
bool Encoder3Abs[Encoder3_Absolute_Pos + 1];
bool Encoder4Abs[Encoder4_Absolute_Pos + 1];
bool Encoder5Abs[Encoder5_Absolute_Pos + 1];
bool Encoder6Abs[Encoder6_Absolute_Pos + 1];
bool Encoder7Abs[Encoder7_Absolute_Pos + 1];
bool Encoder8Abs[Encoder8_Absolute_Pos + 1];
int Encoder1AbsPos = 0;
int Encoder2AbsPos = 0;
int Encoder3AbsPos = 0;
int Encoder4AbsPos = 0;
int Encoder5AbsPos = 0;
int Encoder6AbsPos = 0;
int Encoder7AbsPos = 0;
int Encoder8AbsPos = 0;

void EncoderLoop()
{
if (digitalRead(Encoder1_IntPin) == LOW)
{
  if (Encoder1_Enabled == 1)
  {
    if (Encoder1_Type == "Incremental")
    {
      int encoder1_PinA_State = Encoder1_PinA;
      unsigned long encoder1_Millis = millis();

      if ((encoder1_Millis - encoder1_PreMillis) >= Encoder1_Time)
      {
        if (encoder1_PinA_State != encoder1_PinA_LastState)
        {
          encoder1_PreMillis = encoder1_Millis;
          if (Encoder1_PinB != encoder1_PinA_State)
          {
            Encoder1[0] = 1;
            Encoder1[1] = 0;
          } else {
            Encoder1[0] = 0;
            Encoder1[1] = 1;
          }
        } else {
        Encoder1[0] = 0;
        Encoder1[1] = 0;
        }
      }
      encoder1_PinA_LastState = encoder1_PinA_State;
    }

    if (Encoder1_Type == "Absolute")
    {
      int encoder1_PinA_State = Encoder1_PinA;
      unsigned long encoder1_Millis = millis();
      Encoder1[0] = 0;  // Resets incremental encoder to 0 (incase switching with PC commands)
      Encoder1[1] = 0;
      
      if ((encoder1_Millis - encoder1_PreMillis) >= Encoder1_Time)
      {
        if (encoder1_PinA_State != encoder1_PinA_LastState)
        {
          encoder1_PreMillis = encoder1_Millis;
          if (Encoder1_PinB != encoder1_PinA_State)
          {
            Encoder1AbsPos ++;
          } else {
            Encoder1AbsPos --;
          }
        }
        if (Encoder1AbsPos > Encoder1_Absolute_Pos)
        {
          Encoder1AbsPos = 1;
        }
        if (Encoder1AbsPos <= 0)
        {
          Encoder1AbsPos = Encoder1_Absolute_Pos;
        }
      }
      encoder1_PinA_LastState = encoder1_PinA_State;
      Encoder1Abs[1] = 0;
      Encoder1Abs[2] = 0;
      Encoder1Abs[3] = 0;
      Encoder1Abs[4] = 0;
      Encoder1Abs[5] = 0;
      Encoder1Abs[6] = 0;
      Encoder1Abs[7] = 0;
      Encoder1Abs[8] = 0;
      Encoder1Abs[9] = 0;
      Encoder1Abs[10] = 0;
      Encoder1Abs[11] = 0;
      Encoder1Abs[12] = 0;

      Encoder1Abs[Encoder1AbsPos] = 1;
    }
  }
}
if (digitalRead(Encoder2_IntPin) == LOW)
{
  if (Encoder2_Enabled == 1)
  {
    if (Encoder2_Type == "Incremental")
    {
      int encoder2_PinA_State = Encoder2_PinA;
      unsigned long encoder2_Millis = millis();

      if ((encoder2_Millis - encoder2_PreMillis) >= Encoder2_Time)
      {
        if (encoder2_PinA_State != encoder2_PinA_LastState)
        {
          encoder2_PreMillis = encoder2_Millis;
          if (Encoder2_PinB != encoder2_PinA_State)
          {
            Encoder2[0] = 1;
            Encoder2[1] = 0;
          } else {
            Encoder2[0] = 0;
            Encoder2[1] = 1;
          }
        } else {
        Encoder2[0] = 0;
        Encoder2[1] = 0;
        }
      }
      encoder2_PinA_LastState = encoder2_PinA_State;
    }

    if (Encoder2_Type == "Absolute")
    {
      int encoder2_PinA_State = Encoder2_PinA;
      unsigned long encoder2_Millis = millis();
      Encoder2[0] = 0;  // Resets incremental encoder to 0 (incase switching with PC commands)
      Encoder2[1] = 0;
      
      if ((encoder2_Millis - encoder2_PreMillis) >= Encoder2_Time)
      {
        if (encoder2_PinA_State != encoder2_PinA_LastState)
        {
          encoder2_PreMillis = encoder2_Millis;
          if (Encoder2_PinB != encoder2_PinA_State)
          {
            Encoder2AbsPos ++;
          } else {
            Encoder2AbsPos --;
          }
        }
        if (Encoder2AbsPos > Encoder2_Absolute_Pos)
        {
          Encoder2AbsPos = 1;
        }
        if (Encoder2AbsPos <= 0)
        {
          Encoder2AbsPos = Encoder2_Absolute_Pos;
        }
      }
      encoder2_PinA_LastState = encoder2_PinA_State;
      Encoder2Abs[1] = 0;
      Encoder2Abs[2] = 0;
      Encoder2Abs[3] = 0;
      Encoder2Abs[4] = 0;
      Encoder2Abs[5] = 0;
      Encoder2Abs[6] = 0;
      Encoder2Abs[7] = 0;
      Encoder2Abs[8] = 0;
      Encoder2Abs[9] = 0;
      Encoder2Abs[10] = 0;
      Encoder2Abs[11] = 0;
      Encoder2Abs[12] = 0;

      Encoder2Abs[Encoder2AbsPos] = 1;
    }
  }
}
if (digitalRead(Encoder3_IntPin) == LOW)
{
  if (Encoder3_Enabled == 1)
  {
    if (Encoder3_Type == "Incremental")
    {
      int encoder3_PinA_State = Encoder3_PinA;
      unsigned long encoder3_Millis = millis();

      if ((encoder3_Millis - encoder3_PreMillis) >= Encoder3_Time)
      {
        if (encoder3_PinA_State != encoder3_PinA_LastState)
        {
          encoder3_PreMillis = encoder3_Millis;
          if (Encoder3_PinB != encoder3_PinA_State)
          {
            Encoder3[0] = 1;
            Encoder3[1] = 0;
          } else {
            Encoder3[0] = 0;
            Encoder3[1] = 1;
          }
        } else {
        Encoder3[0] = 0;
        Encoder3[1] = 0;
        }
      }
      encoder3_PinA_LastState = encoder3_PinA_State;
    }

    if (Encoder3_Type == "Absolute")
    {
      int encoder3_PinA_State = Encoder3_PinA;
      unsigned long encoder3_Millis = millis();
      Encoder3[0] = 0;  // Resets incremental encoder to 0 (incase switching with PC commands)
      Encoder3[1] = 0;
      
      if ((encoder3_Millis - encoder3_PreMillis) >= Encoder3_Time)
      {
        if (encoder3_PinA_State != encoder3_PinA_LastState)
        {
          encoder3_PreMillis = encoder3_Millis;
          if (Encoder3_PinB != encoder3_PinA_State)
          {
            Encoder3AbsPos ++;
          } else {
            Encoder3AbsPos --;
          }
        }
        if (Encoder3AbsPos > Encoder3_Absolute_Pos)
        {
          Encoder3AbsPos = 1;
        }
        if (Encoder3AbsPos <= 0)
        {
          Encoder3AbsPos = Encoder3_Absolute_Pos;
        }
      }
      encoder3_PinA_LastState = encoder3_PinA_State;
      Encoder3Abs[1] = 0;
      Encoder3Abs[2] = 0;
      Encoder3Abs[3] = 0;
      Encoder3Abs[4] = 0;
      Encoder3Abs[5] = 0;
      Encoder3Abs[6] = 0;
      Encoder3Abs[7] = 0;
      Encoder3Abs[8] = 0;
      Encoder3Abs[9] = 0;
      Encoder3Abs[10] = 0;
      Encoder3Abs[11] = 0;
      Encoder3Abs[12] = 0;

      Encoder3Abs[Encoder3AbsPos] = 1;
    }
  }
}
if (digitalRead(Encoder4_IntPin) == LOW)
{
  if (Encoder4_Enabled == 1)
  {
    if (Encoder4_Type == "Incremental")
    {
      int encoder4_PinA_State = Encoder4_PinA;
      unsigned long encoder4_Millis = millis();

      if ((encoder4_Millis - encoder4_PreMillis) >= Encoder4_Time)
      {
        if (encoder4_PinA_State != encoder4_PinA_LastState)
        {
          encoder4_PreMillis = encoder4_Millis;
          if (Encoder4_PinB != encoder4_PinA_State)
          {
            Encoder4[0] = 1;
            Encoder4[1] = 0;
          } else {
            Encoder4[0] = 0;
            Encoder4[1] = 1;
          }
        } else {
        Encoder4[0] = 0;
        Encoder4[1] = 0;
        }
      }
      encoder4_PinA_LastState = encoder4_PinA_State;
    }

    if (Encoder4_Type == "Absolute")
    {
      int encoder4_PinA_State = Encoder4_PinA;
      unsigned long encoder4_Millis = millis();
      Encoder4[0] = 0;  // Resets incremental encoder to 0 (incase switching with PC commands)
      Encoder4[1] = 0;
      
      if ((encoder4_Millis - encoder4_PreMillis) >= Encoder4_Time)
      {
        if (encoder4_PinA_State != encoder4_PinA_LastState)
        {
          encoder4_PreMillis = encoder4_Millis;
          if (Encoder4_PinB != encoder4_PinA_State)
          {
            Encoder4AbsPos ++;
          } else {
            Encoder4AbsPos --;
          }
        }
        if (Encoder4AbsPos > Encoder4_Absolute_Pos)
        {
          Encoder4AbsPos = 1;
        }
        if (Encoder4AbsPos <= 0)
        {
          Encoder4AbsPos = Encoder4_Absolute_Pos;
        }
      }
      encoder4_PinA_LastState = encoder4_PinA_State;
      Encoder4Abs[1] = 0;
      Encoder4Abs[2] = 0;
      Encoder4Abs[3] = 0;
      Encoder4Abs[4] = 0;
      Encoder4Abs[5] = 0;
      Encoder4Abs[6] = 0;
      Encoder4Abs[7] = 0;
      Encoder4Abs[8] = 0;
      Encoder4Abs[9] = 0;
      Encoder4Abs[10] = 0;
      Encoder4Abs[11] = 0;
      Encoder4Abs[12] = 0;

      Encoder4Abs[Encoder4AbsPos] = 1;
    }
  }
}
if (digitalRead(Encoder5_IntPin) == LOW)
{
  if (Encoder5_Enabled == 1)
  {
    if (Encoder5_Type == "Incremental")
    {
      int encoder5_PinA_State = Encoder5_PinA;
      unsigned long encoder5_Millis = millis();

      if ((encoder5_Millis - encoder5_PreMillis) >= Encoder5_Time)
      {
        if (encoder5_PinA_State != encoder5_PinA_LastState)
        {
          encoder5_PreMillis = encoder5_Millis;
          if (Encoder5_PinB != encoder5_PinA_State)
          {
            Encoder5[0] = 1;
            Encoder5[1] = 0;
          } else {
            Encoder5[0] = 0;
            Encoder5[1] = 1;
          }
        } else {
        Encoder5[0] = 0;
        Encoder5[1] = 0;
        }
      }
      encoder5_PinA_LastState = encoder5_PinA_State;
    }

    if (Encoder5_Type == "Absolute")
    {
      int encoder5_PinA_State = Encoder5_PinA;
      unsigned long encoder5_Millis = millis();
      Encoder5[0] = 0;  // Resets incremental encoder to 0 (incase switching with PC commands)
      Encoder5[1] = 0;
      
      if ((encoder5_Millis - encoder5_PreMillis) >= Encoder5_Time)
      {
        if (encoder5_PinA_State != encoder5_PinA_LastState)
        {
          encoder5_PreMillis = encoder5_Millis;
          if (Encoder5_PinB != encoder5_PinA_State)
          {
            Encoder5AbsPos ++;
          } else {
            Encoder5AbsPos --;
          }
        }
        if (Encoder5AbsPos > Encoder5_Absolute_Pos)
        {
          Encoder5AbsPos = 1;
        }
        if (Encoder5AbsPos <= 0)
        {
          Encoder5AbsPos = Encoder5_Absolute_Pos;
        }
      }
      encoder5_PinA_LastState = encoder5_PinA_State;
      Encoder5Abs[1] = 0;
      Encoder5Abs[2] = 0;
      Encoder5Abs[3] = 0;
      Encoder5Abs[4] = 0;
      Encoder5Abs[5] = 0;
      Encoder5Abs[6] = 0;
      Encoder5Abs[7] = 0;
      Encoder5Abs[8] = 0;
      Encoder5Abs[9] = 0;
      Encoder5Abs[10] = 0;
      Encoder5Abs[11] = 0;
      Encoder5Abs[12] = 0;

      Encoder5Abs[Encoder5AbsPos] = 1;

    }
  }
}
if (digitalRead(Encoder6_IntPin) == LOW)
{
  if (Encoder6_Enabled == 1)
  {
    if (Encoder6_Type == "Incremental")
    {
      int encoder6_PinA_State = Encoder6_PinA;
      unsigned long encoder6_Millis = millis();

      if ((encoder6_Millis - encoder6_PreMillis) >= Encoder6_Time)
      {
        if (encoder6_PinA_State != encoder6_PinA_LastState)
        {
          encoder6_PreMillis = encoder6_Millis;
          if (Encoder6_PinB != encoder6_PinA_State)
          {
            Encoder6[0] = 1;
            Encoder6[1] = 0;
          } else {
            Encoder6[0] = 0;
            Encoder6[1] = 1;
          }
        } else {
        Encoder6[0] = 0;
        Encoder6[1] = 0;
        }
      }
      encoder6_PinA_LastState = encoder6_PinA_State;
    }

    if (Encoder6_Type == "Absolute")
    {
      int encoder6_PinA_State = Encoder6_PinA;
      unsigned long encoder6_Millis = millis();
      Encoder6[0] = 0;  // Resets incremental encoder to 0 (incase switching with PC commands)
      Encoder6[1] = 0;
      
      if ((encoder6_Millis - encoder6_PreMillis) >= Encoder6_Time)
      {
        if (encoder6_PinA_State != encoder6_PinA_LastState)
        {
          encoder6_PreMillis = encoder6_Millis;
          if (Encoder6_PinB != encoder6_PinA_State)
          {
            Encoder6AbsPos ++;
          } else {
            Encoder6AbsPos --;
          }
        }
        if (Encoder6AbsPos > Encoder6_Absolute_Pos)
        {
          Encoder6AbsPos = 1;
        }
        if (Encoder6AbsPos <= 0)
        {
          Encoder6AbsPos = Encoder6_Absolute_Pos;
        }
      }
      encoder6_PinA_LastState = encoder6_PinA_State;
      Encoder6Abs[1] = 0;
      Encoder6Abs[2] = 0;
      Encoder6Abs[3] = 0;
      Encoder6Abs[4] = 0;
      Encoder6Abs[5] = 0;
      Encoder6Abs[6] = 0;
      Encoder6Abs[7] = 0;
      Encoder6Abs[8] = 0;
      Encoder6Abs[9] = 0;
      Encoder6Abs[10] = 0;
      Encoder6Abs[11] = 0;
      Encoder6Abs[12] = 0;

      Encoder6Abs[Encoder6AbsPos] = 1;
    }
  }
}
if (digitalRead(Encoder7_IntPin) == LOW)
{
  if (Encoder7_Enabled == 1)
  {
    if (Encoder7_Type == "Incremental")
    {
      int encoder7_PinA_State = Encoder7_PinA;
      unsigned long encoder7_Millis = millis();

      if ((encoder7_Millis - encoder7_PreMillis) >= Encoder7_Time)
      {
        if (encoder7_PinA_State != encoder7_PinA_LastState)
        {
          encoder7_PreMillis = encoder7_Millis;
          if (Encoder7_PinB != encoder7_PinA_State)
          {
            Encoder7[0] = 1;
            Encoder7[1] = 0;
          } else {
            Encoder7[0] = 0;
            Encoder7[1] = 1;
          }
        } else {
        Encoder7[0] = 0;
        Encoder7[1] = 0;
        }
      }
      encoder7_PinA_LastState = encoder7_PinA_State;
    }

    if (Encoder7_Type == "Absolute")
    {
      int encoder7_PinA_State = Encoder7_PinA;
      unsigned long encoder7_Millis = millis();
      Encoder7[0] = 0;  // Resets incremental encoder to 0 (incase switching with PC commands)
      Encoder7[1] = 0;
      
      if ((encoder7_Millis - encoder7_PreMillis) >= Encoder7_Time)
      {
        if (encoder7_PinA_State != encoder7_PinA_LastState)
        {
          encoder7_PreMillis = encoder7_Millis;
          if (Encoder7_PinB != encoder7_PinA_State)
          {
            Encoder7AbsPos ++;
          } else {
            Encoder7AbsPos --;
          }
        }
        if (Encoder7AbsPos > Encoder7_Absolute_Pos)
        {
          Encoder7AbsPos = 1;
        }
        if (Encoder7AbsPos <= 0)
        {
          Encoder7AbsPos = Encoder7_Absolute_Pos;
        }
      }
      encoder7_PinA_LastState = encoder7_PinA_State;
      Encoder7Abs[1] = 0;
      Encoder7Abs[2] = 0;
      Encoder7Abs[3] = 0;
      Encoder7Abs[4] = 0;
      Encoder7Abs[5] = 0;
      Encoder7Abs[6] = 0;
      Encoder7Abs[7] = 0;
      Encoder7Abs[8] = 0;
      Encoder7Abs[9] = 0;
      Encoder7Abs[10] = 0;
      Encoder7Abs[11] = 0;
      Encoder7Abs[12] = 0;

      Encoder7Abs[Encoder7AbsPos] = 1;
    }
  }
}
if (digitalRead(Encoder8_IntPin) == LOW)
{
  if (Encoder8_Enabled == 1)
  {
    if (Encoder8_Type == "Incremental")
    {
      int encoder8_PinA_State = Encoder8_PinA;
      unsigned long encoder8_Millis = millis();

      if ((encoder8_Millis - encoder8_PreMillis) >= Encoder8_Time)
      {
        if (encoder8_PinA_State != encoder8_PinA_LastState)
        {
          encoder8_PreMillis = encoder8_Millis;
          if (Encoder8_PinB != encoder8_PinA_State)
          {
            Encoder8[0] = 1;
            Encoder8[1] = 0;
          } else {
            Encoder8[0] = 0;
            Encoder8[1] = 1;
          }
        } else {
        Encoder8[0] = 0;
        Encoder8[1] = 0;
        }
      }
      encoder8_PinA_LastState = encoder8_PinA_State;
    }

    if (Encoder8_Type == "Absolute")
    {
      int encoder8_PinA_State = Encoder8_PinA;
      unsigned long encoder8_Millis = millis();
      Encoder8[0] = 0;  // Resets incremental encoder to 0 (incase switching with PC commands)
      Encoder8[1] = 0;
      
      if ((encoder8_Millis - encoder8_PreMillis) >= Encoder8_Time)
      {
        if (encoder8_PinA_State != encoder8_PinA_LastState)
        {
          encoder8_PreMillis = encoder8_Millis;
          if (Encoder8_PinB != encoder8_PinA_State)
          {
            Encoder8AbsPos ++;
          } else {
            Encoder8AbsPos --;
          }
        }
        if (Encoder8AbsPos > Encoder8_Absolute_Pos)
        {
          Encoder8AbsPos = 1;
        }
        if (Encoder8AbsPos <= 0)
        {
          Encoder8AbsPos = Encoder8_Absolute_Pos;
        }
      }
      encoder8_PinA_LastState = encoder8_PinA_State;
      Encoder8Abs[1] = 0;
      Encoder8Abs[2] = 0;
      Encoder8Abs[3] = 0;
      Encoder8Abs[4] = 0;
      Encoder8Abs[5] = 0;
      Encoder8Abs[6] = 0;
      Encoder8Abs[7] = 0;
      Encoder8Abs[8] = 0;
      Encoder8Abs[9] = 0;
      Encoder8Abs[10] = 0;
      Encoder8Abs[11] = 0;
      Encoder8Abs[12] = 0;

      Encoder8Abs[Encoder8AbsPos] = 1;
    }
  }

}
}