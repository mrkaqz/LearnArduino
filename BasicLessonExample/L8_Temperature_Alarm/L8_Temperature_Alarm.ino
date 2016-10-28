/*********************************************************************************************************

*  you may use the following functon:
*  
*  temp.get()                                       // return value of temperature sensor
*
*  buzzer.on();                                     // on
*  buzzer.off();                                    // off
*  buzzer.state();                                  // return state of buzzer, HIGH:on, LOW:off
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
#include <TTSTemp.h>
#include <TTSBuzzer.h>


TTSDisplay disp;                                    // instantiate an object of display
TTSTemp temp;                                       // instantiate an object of temperature
TTSBuzzer buz;                                      // instantiate an object of buzzer


void setup()
{
    // nothing to setup
}

void loop()
{
    int valTemp = temp.get();                       // get light sensor value
    
    disp.num(valTemp);                              // display light sensor value
    
    if(valTemp >= 27)
    {
        buz.on();
    }
    else
    {
        buz.off();
    }
    
    delay(100);
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
