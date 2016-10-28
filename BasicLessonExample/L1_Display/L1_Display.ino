/*********************************************************************************************************
*  you may use the following functon:

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

TTSDisplay disp;                                    // instantiate an object

void setup()
{
    // nothing to setup
}

void loop()
{
    disp.num(9999);                                 // display a number: 1024, you can input 0-9999
    delay(1000);                                    // wait 1s
    
    disp.clear();
    
    for (int i=999;i>0;i--){
      disp.num(i);
      delay(10);
    }
    disp.clear();
    delay(1000);
    
    disp.time(12, 00);                              // display time, 11:26
    disp.pointOn();                                 // display :
    delay(100);    
    
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
