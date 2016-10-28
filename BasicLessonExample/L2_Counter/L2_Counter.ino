/*********************************************************************************************************
*  you may use the following functon:
*  
*  button.get();                                    // return button state, HIGH or LOW
*  button.pressed();                                // return HIGH when button is pressed
*  button.released();                               // return HIGH when button is released
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
#include <TTSButton.h>


TTSDisplay disp;                                    // instantiate an object of display
TTSButton but1(TTSK1);  

                          // instantiate an object of button 1

int cnt = 0;                                        // counter


void setup()
{
    disp.clear();                                   // clear and diaplay 0
    disp.num(0);
}

void loop()
{
    if(but1.pressed())                              // if button 1 pressed
    {
        cnt++;                                      // cnt add 1
        disp.num(cnt);                              // display cnt
        
        if(cnt > 500)                              // cnt exceed 9999, reload to 0
        {
            cnt = 0; 
        }
    }else{
     // disp.clear();
      disp.num(0);
    
    }
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/
