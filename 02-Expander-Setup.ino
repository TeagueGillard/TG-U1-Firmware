#include <Wire.h>
#include <PCA95x5.h>
#include <Adafruit_ADS1X15.h>

// Create digital port expanders
PCA9555 pca1;
PCA9555 pca2;
PCA9555 pca3;
PCA9555 pca4;

// Create analog port expanders
Adafruit_ADS1115 ads1;
Adafruit_ADS1115 ads2;
Adafruit_ADS1115 ads3;
Adafruit_ADS1115 ads4;

// Digital port expander pins
bool buttonState1[Expander1_Pins] = { 0 };
bool buttonState2[Expander2_Pins] = { 0 };
bool buttonState3[Expander3_Pins] = { 0 };
bool buttonState4[Expander4_Pins] = { 0 };

// Analog port expander pins
int16_t Expander1_A0 = 0;
int16_t Expander1_A1 = 0;
int16_t Expander1_A2 = 0;
int16_t Expander1_A3 = 0;

int16_t Expander2_A0 = 0;
int16_t Expander2_A1 = 0;
int16_t Expander2_A2 = 0;
int16_t Expander2_A3 = 0;

int16_t Expander3_A0 = 0;
int16_t Expander3_A1 = 0;
int16_t Expander3_A2 = 0;
int16_t Expander3_A3 = 0;

int16_t Expander4_A0 = 0;
int16_t Expander4_A1 = 0;
int16_t Expander4_A2 = 0;
int16_t Expander4_A3 = 0;

void ExpanderSetup()
{
    Wire.begin();
    Wire1.begin();

    if (Expander1_Enabled == 1)
    {
        if (Expander1_Type == "DI")
        {
            if (Expander1_SDA == "SDA")
            {
                pca1.attach(Wire, Expander1_Address);
                pca1.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
                pca1.direction(PCA95x5::Direction::IN_ALL);
            }
            else {
                pca1.attach(Wire1, Expander1_Address);
                pca1.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
                pca1.direction(PCA95x5::Direction::IN_ALL);
            }

        }

        if (Expander1_Type == "DO")
        {

        }

        if (Expander1_Type == "AI")
        {
            ads1.setGain(GAIN_ONE);
            ads1.begin();

        }
    }

    if (Expander2_Enabled == 1)
    {
        if (Expander2_Type == "DI")
        {
            if (Expander2_SDA == "SDA")
            {
                pca2.attach(Wire, Expander2_Address);
                pca2.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
                pca2.direction(PCA95x5::Direction::IN_ALL);
            }
            else {
                pca2.attach(Wire1, Expander2_Address);
                pca2.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
                pca2.direction(PCA95x5::Direction::IN_ALL);
            }

        }

        if (Expander2_Type == "DO")
        {

        }

        if (Expander2_Type == "AI")
        {
            ads2.setGain(GAIN_ONE);
            ads2.begin();

        }
    }

    if (Expander3_Enabled == 1)
    {
        if (Expander3_Type == "DI")
        {
            if (Expander3_SDA == "SDA")
            {
                pca3.attach(Wire, Expander3_Address);
                pca3.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
                pca3.direction(PCA95x5::Direction::IN_ALL);
            }
            else {
                pca3.attach(Wire1, Expander3_Address);
                pca3.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
                pca3.direction(PCA95x5::Direction::IN_ALL);
            }

        }

        if (Expander3_Type == "DO")
        {

        }

        if (Expander3_Type == "AI")
        {
            ads3.setGain(GAIN_ONE);
            ads3.begin();

        }
    }
    /*
      if (Expander4_Enabled == 1)
      {
        if (Expander4_Type == "DI")
        {
          if (Expander4_SDA == "SDA")
          {
            pca4.attach(Wire, Expander4_Address);
            pca4.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
            pca4.direction(PCA95x5::Direction::IN_ALL);
          } else {
            pca4.attach(Wire1, Expander4_Address);
            pca4.polarity(PCA95x5::Polarity::ORIGINAL_ALL);
            pca4.direction(PCA95x5::Direction::IN_ALL);
          }

        }

        if (Expander4_Type == "DO")
        {

        }

        if (Expander4_Type == "AI")
        {
          ads4.setGain(GAIN_ONE);
          ads4.begin();

        }
      }*/
}


void ExpanderLoop()
{
    if (Expander1_Enabled == 1)
    {
        if (Expander1_Type == "DI")
        {
            uint16_t state1 = pca1.read();
            for (int i = 0; i < 16; i++) {
                buttonState1[i] = (state1 & (1 << i)) != 0;
            }

        }

        if (Expander1_Type == "DO")
        {

        }

        if (Expander1_Type == "AI")
        {
            int16_t Expander1_A0 = ads1.readADC_SingleEnded(0);
            int16_t Expander1_A1 = ads1.readADC_SingleEnded(1);
            int16_t Expander1_A2 = ads1.readADC_SingleEnded(2);
            int16_t Expander1_A3 = ads1.readADC_SingleEnded(3);

        }
    }

    if (Expander2_Enabled == 1)
    {
        if (Expander2_Type == "DI")
        {
            uint16_t state2 = pca2.read();
            for (int i = 0; i < 16; i++) {
                buttonState2[i] = (state2 & (1 << i)) != 0;
            }

        }

        if (Expander2_Type == "DO")
        {

        }

        if (Expander2_Type == "AI")
        {
            int16_t Expander2_A0 = ads2.readADC_SingleEnded(0);
            int16_t Expander2_A1 = ads2.readADC_SingleEnded(1);
            int16_t Expander2_A2 = ads2.readADC_SingleEnded(2);
            int16_t Expander2_A3 = ads2.readADC_SingleEnded(3);

        }
    }

    if (Expander3_Enabled == 1)
    {
        if (Expander3_Type == "DI")
        {
            uint16_t state3 = pca3.read();
            for (int i = 0; i < 16; i++) {
                buttonState3[i] = (state3 & (1 << i)) != 0;
            }

        }

        if (Expander3_Type == "DO")
        {

        }

        if (Expander3_Type == "AI")
        {
            int16_t Expander3_A0 = ads3.readADC_SingleEnded(0);
            int16_t Expander3_A1 = ads3.readADC_SingleEnded(1);
            int16_t Expander3_A2 = ads3.readADC_SingleEnded(2);
            int16_t Expander3_A3 = ads3.readADC_SingleEnded(3);

        }
    }
    /*
      if (Expander4_Enabled == 1)
      {
        if (Expander4_Type == "DI")
        {
          uint16_t state4 = pca4.read();
          for (int i = 0; i < 16; i++) {
            buttonState4[i] = (state4 & (1 << i)) != 0;
          }

        }

        if (Expander4_Type == "DO")
        {

        }

        if (Expander4_Type == "AI")
        {
          int16_t Expander4_A0 = ads4.readADC_SingleEnded(0);
          int16_t Expander4_A1 = ads4.readADC_SingleEnded(1);
          int16_t Expander4_A2 = ads4.readADC_SingleEnded(2);
          int16_t Expander4_A3 = ads4.readADC_SingleEnded(3);

        }
      }*/
}



