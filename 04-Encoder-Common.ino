int encoder1_PinA_LastState = 1;

unsigned long encoder1_PreMillis = 0;
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
if (digitalRead(Expander2_IntPin) == LOW)
{
  if (Encoder1_Enabled == 1)
  {
    if (Encoder1_Type == "Incremental")
    {
      int encoder1_PinA_State = !Encoder1_PinA;
      unsigned long encoder1_Millis = millis();

      if ((encoder1_Millis - encoder1_PreMillis) >= Encoder1_Time)
      {
        if (encoder1_PinA_State != encoder1_PinA_LastState)
        {
          encoder1_PreMillis = encoder1_Millis;
          if (!Encoder1_PinB != encoder1_PinA_State)
          {
            Encoder1[0] = 1;
            Encoder1[1] = 0;
          } else {
            Encoder1[0] = 0;
            Encoder1[1] = 1;
          }
        } else {
        Encoder1[0] = 1;
        Encoder1[1] = 1;
        }
      }
      encoder1_PinA_LastState = encoder1_PinA_State;

    }

    if (Encoder1_Type == "Absolute")
    {

    }

  }

}
}