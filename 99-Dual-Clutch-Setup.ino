unsigned long DualClutch_PreMillis = 0;
void DualClutchLoop()
{
  if (DualClutch_Enabled == 1)
  {
    if (DualClutch_BiteAdjButton == 1)
    {
      unsigned long DualClutch_Millis = millis();
      if ((DualClutch_Millis - DualClutch_PreMillis) >= DualClutch_BiteDebounce)
      {
        // Set bite point
        if (DualClutch_BiteAdj_Minus10 == 1)
        {
          BitePoint -= 10;
        }
        if (DualClutch_BiteAdj_Plus10 == 1)
        {
          BitePoint += 10;
        }
        if (DualClutch_BiteAdj_Minus1 == 1)
        {
          BitePoint -= 1;
        }
        if (DualClutch_BiteAdj_Plus1 == 1)
        {
          BitePoint += 1;
        }

        if (BitePoint > 100)
        {
          BitePoint = 100;
        }
        if (BitePoint < 0)
        {
          BitePoint = 0;
        }
        DualClutch_PreMillis = DualClutch_Millis;
      }

      if ((analogRead(DualClutch_MasterPin) > 950) && (analogRead(DualClutch_SlavePin) > (BitePoint * 10)))
      {
        DualClutchValue = analogRead(DualClutch_SlavePin);
      }
      if ((analogRead(DualClutch_MasterPin) > BitePoint * 10) && (analogRead(DualClutch_SlavePin) < (BitePoint * 10)))
      {
        DualClutchValue = (BitePoint * 10);
      }
      if ((analogRead(DualClutch_MasterPin) < BitePoint * 10) && (analogRead(DualClutch_SlavePin) < (BitePoint * 10)))
      {
        DualClutchValue = analogRead(DualClutch_MasterPin);
      }



    }
  }
}