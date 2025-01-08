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

    }
  }

}
}