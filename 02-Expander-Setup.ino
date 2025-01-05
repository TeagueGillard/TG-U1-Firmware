#include <Wire.h>
bool buttonState1[Expander1_Pins] = { 0 };
bool buttonState2[Expander2_Pins] = { 0 };
bool buttonState3[Expander3_Pins] = { 0 };
bool buttonState4[Expander4_Pins] = { 0 };


void ExpanderSetup()
{
    Wire.setSDA(4);
    Wire.setSCL(5);
    Wire1.setSDA(6);
    Wire1.setSCL(7);

    Wire.begin();
    Wire1.begin();

    if (Expander1_Enabled == 1)
    {
        if (Expander1_Type == "DI")
        {
            pinMode(Expander1_IntPin, INPUT_PULLUP);
            //attachInterupt(digitalPinToInterrupt(Expander1_IntPin), buttonInterrupt, FALLING);


            if (Expander1_SDA == "SDA")
            {
                Wire.beginTransmission(Expander1_Address);
                Wire.write(0x06);
                Wire.write(0xFF);
                Wire.write(0xFF);
                Wire.endTransmission();
            }
            else {
                Wire1.beginTransmission(Expander1_Address);
                Wire1.write(0x06);
                Wire1.write(0xFF);
                Wire1.write(0xFF);
                Wire1.endTransmission();
            }
        }

        if (Expander1_Type == "DO")
        {

        }

        if (Expander1_Type == "AI")
        {


        }
    }

    if (Expander2_Enabled == 1)
    {
        if (Expander2_Type == "DI")
        {
            pinMode(Expander2_IntPin, INPUT_PULLUP);
            //attachInterupt(digitalPinToInterrupt(Expander2_IntPin), buttonInterrupt, FALLING);


            if (Expander2_SDA == "SDA")
            {
                Wire.beginTransmission(Expander2_Address);
                Wire.write(0x06);
                Wire.write(0xFF);
                Wire.write(0xFF);
                Wire.endTransmission();
            }
            else {
                Wire1.beginTransmission(Expander2_Address);
                Wire1.write(0x06);
                Wire1.write(0xFF);
                Wire1.write(0xFF);
                Wire1.endTransmission();
            }
        }

        if (Expander2_Type == "DO")
        {

        }

        if (Expander2_Type == "AI")
        {


        }
    }

    if (Expander3_Enabled == 1)
    {
        if (Expander3_Type == "DI")
        {
            pinMode(Expander3_IntPin, INPUT_PULLUP);
            //attachInterupt(digitalPinToInterrupt(Expander3_IntPin), buttonInterrupt, FALLING);


            if (Expander3_SDA == "SDA")
            {
                Wire.beginTransmission(Expander3_Address);
                Wire.write(0x06);
                Wire.write(0xFF);
                Wire.write(0xFF);
                Wire.endTransmission();
            }
            else {
                Wire1.beginTransmission(Expander3_Address);
                Wire1.write(0x06);
                Wire1.write(0xFF);
                Wire1.write(0xFF);
                Wire1.endTransmission();
            }
        }

        if (Expander3_Type == "DO")
        {

        }

        if (Expander3_Type == "AI")
        {


        }
    }

    if (Expander4_Enabled == 1)
    {
        if (Expander4_Type == "DI")
        {
            pinMode(Expander4_IntPin, INPUT_PULLUP);
            //attachInterupt(digitalPinToInterrupt(Expander4_IntPin), buttonInterrupt, FALLING);


            if (Expander4_SDA == "SDA")
            {
                Wire.beginTransmission(Expander4_Address);
                Wire.write(0x06);
                Wire.write(0xFF);
                Wire.write(0xFF);
                Wire.endTransmission();
            }
            else {
                Wire1.beginTransmission(Expander4_Address);
                Wire1.write(0x06);
                Wire1.write(0xFF);
                Wire1.write(0xFF);
                Wire1.endTransmission();
            }
        }

        if (Expander4_Type == "DO")
        {

        }

        if (Expander4_Type == "AI")
        {


        }
    }

}


void ExpanderLoop()
{
    if (Expander1_Enabled == 1)
    {
        if (Expander1_Type == "DI")
        {
            if (Expander1_SDA == "SDA")
            {
                Wire.beginTransmission(Expander1_Address);
                Wire.write(0x00);
                Wire.endTransmission();
                Wire.requestFrom(Expander1_Address, 2);

                if (Wire.available() == 2)
                {
                    byte port0 = Wire.read();
                    byte port1 = Wire.read();

                    for (int i = 0; i < Expander1_Pins; i++)
                    {
                        if (i < 8)
                        {
                            buttonState1[i] = !(port0 & (1 << i));
                        }
                        else {
                            buttonState1[i] = !(port1 & (1 << (i - 8)));
                        }
                    }
                }
            }
            else {
                Wire1.beginTransmission(Expander1_Address);
                Wire1.write(0x00);
                Wire1.endTransmission();
                Wire1.requestFrom(Expander1_Address, 2);

                if (Wire1.available() == 2)
                {
                    byte port0 = Wire1.read();
                    byte port1 = Wire1.read();

                    for (int i = 0; i < Expander1_Pins; i++)
                    {
                        if (i < 8)
                        {
                            buttonState1[i] = !(port0 & (1 << i));
                        }
                        else {
                            buttonState1[i] = !(port1 & (1 << (i - 8)));
                        }
                    }
                }
            }
        }

        if (Expander1_Type == "DO")
        {

        }

        if (Expander1_Type == "AI")
        {


        }
    }

    if (Expander2_Enabled == 1)
    {
        if (Expander2_Type == "DI")
        {
            if (Expander2_SDA == "SDA")
            {
                Wire.beginTransmission(Expander2_Address);
                Wire.write(0x00);
                Wire.endTransmission();
                Wire.requestFrom(Expander2_Address, 2);

                if (Wire.available() == 2)
                {
                    byte port0 = Wire.read();
                    byte port1 = Wire.read();

                    for (int i = 0; i < Expander2_Pins; i++)
                    {
                        if (i < 8)
                        {
                            buttonState2[i] = !(port0 & (1 << i));
                        }
                        else {
                            buttonState2[i] = !(port1 & (1 << (i - 8)));
                        }
                    }
                }
            }
            else {
                Wire1.beginTransmission(Expander2_Address);
                Wire1.write(0x00);
                Wire1.endTransmission();
                Wire1.requestFrom(Expander2_Address, 2);

                if (Wire1.available() == 2)
                {
                    byte port0 = Wire1.read();
                    byte port1 = Wire1.read();

                    for (int i = 0; i < Expander2_Pins; i++)
                    {
                        if (i < 8)
                        {
                            buttonState2[i] = !(port0 & (1 << i));
                        }
                        else {
                            buttonState2[i] = !(port1 & (1 << (i - 8)));
                        }
                    }
                }
            }
        }

        if (Expander2_Type == "DO")
        {

        }

        if (Expander2_Type == "AI")
        {


        }
    }

    if (Expander3_Enabled == 1)
    {
        if (Expander3_Type == "DI")
        {
            if (Expander3_SDA == "SDA")
            {
                Wire.beginTransmission(Expander3_Address);
                Wire.write(0x00);
                Wire.endTransmission();
                Wire.requestFrom(Expander3_Address, 2);

                if (Wire.available() == 2)
                {
                    byte port0 = Wire.read();
                    byte port1 = Wire.read();

                    for (int i = 0; i < Expander3_Pins; i++)
                    {
                        if (i < 8)
                        {
                            buttonState3[i] = !(port0 & (1 << i));
                        }
                        else {
                            buttonState3[i] = !(port1 & (1 << (i - 8)));
                        }
                    }
                }
            }
            else {
                Wire1.beginTransmission(Expander3_Address);
                Wire1.write(0x00);
                Wire1.endTransmission();
                Wire1.requestFrom(Expander3_Address, 2);

                if (Wire1.available() == 2)
                {
                    byte port0 = Wire1.read();
                    byte port1 = Wire1.read();

                    for (int i = 0; i < Expander3_Pins; i++)
                    {
                        if (i < 8)
                        {
                            buttonState3[i] = !(port0 & (1 << i));
                        }
                        else {
                            buttonState3[i] = !(port1 & (1 << (i - 8)));
                        }
                    }
                }
            }
        }

        if (Expander3_Type == "DO")
        {

        }

        if (Expander3_Type == "AI")
        {


        }
    }

    if (Expander4_Enabled == 1)
    {
        if (Expander4_Type == "DI")
        {
            if (Expander4_SDA == "SDA")
            {
                Wire.beginTransmission(Expander4_Address);
                Wire.write(0x00);
                Wire.endTransmission();
                Wire.requestFrom(Expander4_Address, 2);

                if (Wire.available() == 2)
                {
                    byte port0 = Wire.read();
                    byte port1 = Wire.read();

                    for (int i = 0; i < Expander4_Pins; i++)
                    {
                        if (i < 8)
                        {
                            buttonState4[i] = !(port0 & (1 << i));
                        }
                        else {
                            buttonState4[i] = !(port1 & (1 << (i - 8)));
                        }
                    }
                }
            }
            else {
                Wire1.beginTransmission(Expander4_Address);
                Wire1.write(0x00);
                Wire1.endTransmission();
                Wire1.requestFrom(Expander4_Address, 2);

                if (Wire1.available() == 2)
                {
                    byte port0 = Wire1.read();
                    byte port1 = Wire1.read();

                    for (int i = 0; i < Expander4_Pins; i++)
                    {
                        if (i < 8)
                        {
                            buttonState4[i] = !(port0 & (1 << i));
                        }
                        else {
                            buttonState4[i] = !(port1 & (1 << (i - 8)));
                        }
                    }
                }
            }
        }

        if (Expander4_Type == "DO")
        {

        }

        if (Expander4_Type == "AI")
        {


        }
    }



}



