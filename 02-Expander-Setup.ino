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
bool Expander1_State[Expander1_Pins] = { 0 };
bool Expander2_State[Expander2_Pins] = { 0 };
bool Expander3_State[Expander3_Pins] = { 0 };
bool Expander4_State[Expander4_Pins] = { 0 };

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
    pinMode(29, OUTPUT);
    digitalWrite(29, HIGH); // Sets pin29(VREF) to 3.3v to power analog pins and external ADC
    if (Expander1_Enabled == 1)
    {
        if (Expander1_Type == "DI")
        {
            if (Expander1_SDA == "SDA")
            {
                pca1.attach(Wire, Expander1_Address);
                pca1.polarity(PCA95x5::Polarity::INVERTED_ALL);
                pca1.direction(PCA95x5::Direction::IN_ALL);
            }
            else {
                pca1.attach(Wire1, Expander1_Address);
                pca1.polarity(PCA95x5::Polarity::INVERTED_ALL);
                pca1.direction(PCA95x5::Direction::IN_ALL);
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
                pca2.attach(Wire, Expander2_Address);
                pca2.polarity(PCA95x5::Polarity::INVERTED_ALL);
                pca2.direction(PCA95x5::Direction::IN_ALL);
            }
            else {
                pca2.attach(Wire1, Expander2_Address);
                pca2.polarity(PCA95x5::Polarity::INVERTED_ALL);
                pca2.direction(PCA95x5::Direction::IN_ALL);
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
                pca3.attach(Wire, Expander3_Address);
                pca3.polarity(PCA95x5::Polarity::INVERTED_ALL);
                pca3.direction(PCA95x5::Direction::IN_ALL);
            }
            else {
                pca3.attach(Wire1, Expander3_Address);
                pca3.polarity(PCA95x5::Polarity::INVERTED_ALL);
                pca3.direction(PCA95x5::Direction::IN_ALL);
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
                pca4.attach(Wire, Expander4_Address);
                pca4.polarity(PCA95x5::Polarity::INVERTED_ALL);
                pca4.direction(PCA95x5::Direction::IN_ALL);
            }
            else {
                pca4.attach(Wire1, Expander4_Address);
                pca4.polarity(PCA95x5::Polarity::INVERTED_ALL);
                pca4.direction(PCA95x5::Direction::IN_ALL);
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
            uint16_t state1 = pca1.read();
            for (int i = 0; i < 16; i++) {
                Expander1_State[i] = (state1 & (1 << i)) != 0;
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
            uint16_t state2 = pca2.read();
            for (int i = 0; i < 16; i++) {
                Expander2_State[i] = (state2 & (1 << i)) != 0;
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
            uint16_t state3 = pca3.read();
            for (int i = 0; i < 16; i++) {
                Expander3_State[i] = (state3 & (1 << i)) != 0;
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
            uint16_t state4 = pca4.read();
            for (int i = 0; i < 16; i++) {
                Expander4_State[i] = (state4 & (1 << i)) != 0;
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



