/*==============================================================================
Project: Intro-1-Input-Output
Date:    May 16, 2021
This example UBMP4 input and output program demonstrates pushbutton input, LED
(bit) output, port latch (byte) output, time delay functions, and simple 'if'
condition structures.
Additional program analysis and programming activities demonstrate byte output,
logical condition operators AND and OR, using delay functions to create sound,
and simulated start-stop button functionality.
==============================================================================*/
 
#include    "xc.h"              // Microchip XC8 compiler include file
#include    "stdint.h"          // Include integer definitions
#include    "stdbool.h"         // Include Boolean (true/false) definitions
 
#include    "UBMP4.h"           // Include UBMP4 constants and functions
 
// TODO Set linker ROM ranges to 'default,-0-7FF' under "Memory model" pull-down.
// TODO Set linker code offset to '800' under "Additional options" pull-down.
 
// The main function is required, and the program begins executing from here.
void note(){
   for(char c = 150; c != 0; c--) {
                   BEEPER = !BEEPER;
                   __delay_us(1136.363635);
                   LED4 = !LED4;
  
          
       
 
    }
}
void note2(){
   for(char c = 150; c != 0; c--) {
                   BEEPER = !BEEPER;
                   __delay_us(1351.387875);
                   LED3 = !LED3;
 
       }
}
void note3(){
    for(char c = 150; c != 0; c--) {
                   BEEPER = !BEEPER;
                   __delay_us(1702.64932);
                   LED6 = !LED6;
       }
}
 void note4(){
     for(char c = 150; c != 0; c--){
        BEEPER = !BEEPER;
         __delay_us(1803.881955);
           LED4 = !LED4;
     }
 }
 void note5(){
     for(char c = 150; c != 0; c--){
         BEEPER = !BEEPER;
         __delay_us(901.924705);
         LED3 = !LED3;
     }
 }
 void note6(unsigned int cycles){
     for(cycles; cycles != 0; cycles--){
         BEEPER = !BEEPER;
         __delay_us(758.43762);
         LED5 = !LED5;
     }
 }
 void note7(){
     for(char c = 150; c != 0; c--){
         BEEPER = !BEEPER;
         __delay_us(851.310165);
         LED6 = !LED6;
     }
 }
 void note8(){
     for(char c = 150; c != 0; c--){
         BEEPER = !BEEPER;
         __delay_us(1203.948955);
         LED5 = !LED5;
     }
 }
int main(void)
{
   // Configure oscillator and I/O ports. These functions run once at start-up.
   OSC_config();               // Configure internal oscillator for 48 MHz
   UBMP4_config();             // Configure on-board UBMP4 I/O devices
    
   // Code in this while loop runs repeatedly.
   unsigned char c;
   while(1)
    {
       // If SW2 is pressed, make a flashy light pattern
          //LED for the BEEPER sounds
           if(SW2 == 0){
           LED3 = 1;
           } else if(SW2 != 0) {
           LED3 = 0;
           }
           if(SW3 == 0){
           LED4 = 1;
           } else if(SW3 != 0){
           LED4 = 0;
           }
           if(SW4 == 0){
           LED5 = 1;
           } else if(SW4 != 0){
           LED5 = 0;
           }
           if(SW5 == 0){
           LED6 = 1;
           } else if(SW5 != 0){
           LED6 = 0;
           }
  
           //BEEPER sounds
        //    if(SW2 == 0)
        //    {
        //        BEEPER = !BEEPER;
        //        __delay_us(1351.387875); //F4#
        //    } else if(SW3 == 0){
        //        BEEPER = !BEEPER;
        //        __delay_us(1136.363635); //A4
        //    } else if(SW4 == 0){
        //        BEEPER = !BEEPER;
        //        __delay_us(901.924705); //C5#
        //    } else if(SW5 == 0){
        //        BEEPER = !BEEPER;
        //        __delay_us(1702.64932); //D4
        //    } else if(SW3 == 0){
                //   BEEPER = !BEEPER
                //   __delay_us(1803.881955); //C4#
            //   } else if(SW4 == 0){
            //          BEEPER = !BEEPER
            //          __delay_us(329.625); //E5
            //   } else if(SW5 ==0){
            //     BEEPER = !BEEPER
            //     __delay_us(851.310165); //D5
            // }
        
           if (SW2 == 0) {
               LED3 = 0;
               note2();
                __delay_ms(250);
              
             
               note();
               __delay_ms(100);
              
 
               for(c =250; c != 0; c--) {
                   BEEPER = !BEEPER;
                   __delay_us(901.924705);
                   LED5 = !LED5;
               }
               __delay_ms(250);

               __delay_ms(50);
               note();
               __delay_ms(100);

               __delay_ms(100);
               note2();
               __delay_ms(100);
               note3();
               __delay_ms(20);

               note3();
               __delay_ms(20);
               
               note3();
               __delay_ms(20);

               }
                if(SW3 == 0){
                 LED4 = 0;
                 note4();
                __delay_ms(50);

                note3();
                __delay_ms(100);

                note2();
                __delay_ms(100);

                note();
                __delay_ms(100);

                note5();
                __delay_ms(100);

                __delay_ms(200);

                note();
                __delay_ms(100);

                __delay_ms(200);
                
                note2();
                __delay_ms(100);

                note6(600);
                __delay_ms(250);
                note6(250);
                __delay_ms(100);
                note7();
                __delay_ms(100);

                }
                if(SW4 == 0){
                
                }
              
                   if(SW1 == 0)
               {
                   RESET();
               }
           }
 
 
      
       // Add code for your Program Analysis and Programming Activities here:
 
       // Activate bootloader if SW1 is pressed.
       // if(SW1 == 0)
       // {
       //     RESET();
       // }
  
}
 
/* Program Analysis
*
* 1. How many times do the LEDs flash if SW2 is quickly pressed and released?
*    Do the LEDs keep flashing when SW2 is held? Look at the program and
*    explain why this happens when SW2 is held.
    //When SW2 is held, the lights goes infinite loop but if it's pressed, it goes 1 loop.
*
* 2. Explain the difference between the statements: LED3 = 0; and LED3 = 1;
*   // LED3 = 1 means itś on and 0 means itś off.
* 3. What voltage do you expect the microcontroller to output to LED D3 when
*    the statement LED3 = 0; runs? What voltage do you expect the output to be
*    when the statement LED3 = 1; runs?
*  //WHenthe LED3 runs, the expected voltage would be 5V.
*    You can confirm the output voltage with a voltmeter if you have access
*    to one. If you tried that, did the voltage match your prediction?
    // It did not match my prediciton but itś at 4.6V.
*
* 4. The statement 'if(SW2 == 0)' uses two equal signs, while the statement
*    'LED3 = 1;' uses a single equal sign. What operation is performed by one
*    equal sign? What operation is performed by two equal signs?
*    The single equal sign will change the value of a variable into a different value.
     The double equal sign will do a comaprison
* 5. The following program code includes instructions that write to the PORTC
*    output latches directly. Try it by copying and pasting this code below
*    the existing SW2 'if' structure, at the location shown by the comment.
 
       if(SW3 == 0)
       {
           LATC = 0b00000000;
           __delay_ms(100);
           LATC = 0b11110000;
           __delay_ms(100);
       }
 
*    What happens when pushbutton SW3 is pressed? Identify at least one
*    advantage and one disadvantage of controlling the LEDs using 'LATC' writes
*    rather than through individual 'LEDn = x;' statements.
*     When SW3 is pressed, all of the LED is flashed.
      The advantage is you can control all of the LED at the same time.
      The disadvantage is that you can't do other buttons.
* 6. Next, compare the operation of 'if' and 'while' structures to simulate
*    momentary buttons. Replace the code you added in 5, above, with this code:
 
       // Momentary button using if structure
       if(SW3 == 0)
       {
           LED4 = 1;
       }
       else
       {
           LED4 = 0;
       }
 
       // Momentary button using while structure
       while(SW4 == 0)
       {
           LED5 = 1;
       }
       LED5 = 0;
 
*    First, try pressing and releasing SW3 and SW4 one at a time.
*
*    Next, press and hold SW3 while pressing and releasing SW4. Does it work
*    as expected?
*
*    Next, try press and holding SW4 while pressing and releasing SW3. Does it
*    work as expected? Explain the difference in operation between the 'if' and
*    'while' structures making up the momentary button code.
*
* 7. Let's explore logical conditions using 'if' statements. Replace the code
*    added in 6, above, with this nested if code to make a logical AND
*    condition that will light LED D4 only if both SW3 and SW4 are pressed:
 
       // Nested if 'AND' code
       if(SW3 == 0)
       {
           if(SW4 == 0)
           {
               LED4 = 1;
           }
           else
           {
               LED4 = 0;
           }
       }
       else
       {
           LED4 = 0;
       }
 
*    Test the code to ensure it works as expected. Does the order of the if
*    conditions matter? (eg. swap the conditional checks for SW3 and SW4)
*    if both Switch pressed, both LED will turn it on but the order should matter.
* 8. Next, replace the code from 7 with the following code which implements a
*    logical AND conditional operator composed of two ampersands '&&':
       // Conditional 'AND' code
       if(SW3 == 0 && SW4 == 0)
       {
           LED4 = 1;
       }
       else
       {
           LED4 = 0;
       }
 
*    Does '&&' work the same way as the nested if structures? Can you think of
*    at least one advantage of using a logical conditional operator instead of
*    nested if structures?
*    Like using  '==', '>=', '<='.
* 9. Replace the double ampersand '&&' with double vertical bars '||)' to make
*    a logical OR conditional operator. Your code should look like this:
        // Conditional 'OR' code
       if(SW3 == 0 || SW4 == 0)
       {
           LED4 = 1;
       }
       else
       {
           LED4 = 0;
       }
 
*    Describe the conditions under which LED4 turns on.
*   LED4 = 0 means it will turn off if there is a else statement.
*
* Programming Activities
*
* 1. The statement '__delay_ms(100);' creates a 100ms delay. Try changing one
*    or more of the delay values in the program to 500ms and see what happens.
*    
*    Can the delay be made even longer? Try 1000 ms. How big can the delay be
*    before MPLAB-X produces an error message? (Hint: can you think of a fast
*    and efficient way of guessing an unknown number?)
*     The delay can be made even longer and the limit before MPLAB-X produces an error message
*     is __delay_ms(4205).
* 2. The '__delay_ms();' function only accepts integers as delay values. To
*    make delays shorter than 1ms, specify a delay in microseconds using the
*    '__delay_us();' function. You won't be able to see such short LED flashes
*    with your eyes, but you could measure them using an oscilloscope, or hear
*    them if they are used to turn the piezo beeper on and off. Try this code:
       // Make a tone while SW5 is held
       if(SW5 == 0)
       {
           BEEPER = 1;
           __delay_us(567);
           BEEPER = 0;
           __delay_us(567);
       }
 
*    Try changing the delay values in both of the __delay_us(); functions.
*    Does the pitch of the tone increase or decrease if the delay value is
*    made smaller?
*   if the dealy value is smaller, the tone is a high pitch noise the more value is smaller
*   the more pitch of the tone increase.
* 3. This code demonstrates a more compact way of toggling the beeper output
*    using a logical NOT operator '!'. Replace the code above, with this code:
       // Make a tone while SW5 is held
       if(SW5 == 0)
       {
           BEEPER = !BEEPER;
           __delay_us(567);
       }
 
*    One difference between this code and the code in 2, above, is the state
*    of the BEEPER pin when SW5 is released. What state will the BEEPER output
*    be in after this code runs? While one advantage of this method is smaller
*    code, can you think of one or more disadvantages based on its output when
*    the button is released?
*    
* 4. Using modified versions of the original SW2 'if' structure, create a
*    program that makes a unique LED flashing pattern for each pushbutton.
*
*    Test each of your flashing patterns. Describe what happens when more than
*    one button is held. Do all of the patterns try to flash the LEDs at the
*    same time, or sequentially? Explain why this is.
*    If all patterns try to flashthe LEDs at the same time, it's going to be sequentially
*    since if the other switch button is not coded to the program.
* 5. Create a program that makes a different tone for each pushbutton.
*
*    Test each tone by pressing each button individually. Next, press two or
*    more buttons at the same time. Describe what the tone waveform would look
*    like when more than one button is held.
*     
* 6. Use individual 'if' structures to simulate 'Start' and 'Stop' buttons for
*    an industrial machine. LED D4 should turn on when SW3 is pressed, stay on
*    even after SW3 is released, and turn off when SW4 is pressed. Test your
*    program to make sure it works.
*
* 7. Running your program from 6, above, describe what happens when both SW3
*    and SW4 are pressed. Does LED D4 stay on? If so, how does the brightness
*    of LED D4 compare between its normal on state following SW3 being pressed
*    to this new state when both SW3 and SW4 are bing held? Can you explain
*    why it changes?
*
* 8. As you can imagine, an industrial machine that is able to turn on even
*    while its 'Stop' button is pressed represents a significant safety hazard.
*    Using a logical conditional operator, modify the start-stop program from
*    activity 5 to make it safer. SW3 should only turn on LED D4 if SW4 is
*    released.
*
* 9. LED D1 is normally used to indicate that a program is running, but it can
*    be controlled by your program as well. If you take a look at the UBMP4
*    schematic, you will see that LED D1's cathode (or negative) pin is
*    connected to the microcontroller instead of the anode (positive) pin as
*    with the other LEDs. This means that you need to make D1's output a zero
*    to turn D1 on. Try it! Make a program that controls or flashes LED D1.
*/