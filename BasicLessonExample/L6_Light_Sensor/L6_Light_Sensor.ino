/*********************************************************************************************************

*  you may use the following functon:
*  
*  light.get();                                     // return light sensor data, 0-1023
*
*  disp.display(int loca, int num);                 // control a  nixie tube
*  disp.num(int num);                               // display a number
*  disp.time(int hour, int min);                    // display time
*  disp.clear();                                    // clear display
*  disp.pointOn();                                  // display :
*  disp.pointOff();                                 // clear :
*********************************************************************************************************/

#include <Wire.h>
#include <Streaming.h>
#include <TTSDisplay.h>
#include <TTSLight.h>


TTSDisplay disp;                                    // instantiate an object of display
TTSLight light;                                     // instantiate an object of light sensor


void setup()
{
    // nothing to setup
}

void loop()
{
    int valLight = light.get();                     // get light sensor value
    
    disp.num(valLight);                             // display light sensor value
    
    delay(100);
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
