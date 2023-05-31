#include <avr/io.h>
#include <avr/interrupt.h>

 /***
  * Ex 12.2
  * Determine your frequencies according to your student number, and 
  * work out appropriate values for TCA0.SINGLE.PER in each case.  
  * Update the #defines below to reflect these values.
  */
#define TONE1_PER F_CPU / 334
#define TONE2_PER F_CPU / 281
#define TONE3_PER F_CPU / 446
#define TONE4_PER F_CPU / 167
// Write your code for Ex 12.2 above this line

void buzzer_init(void);
