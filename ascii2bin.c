/********************************/
/* Program Name:                */
/* Author:                      */
/* Date:                        */
/********************************/
/* Description:                 */
/* Validation Checks:           */
/* Enhancements:                */
/********************************/
​
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <string.h>
#define byte unsigned char
​
int main (int argc, char * argv[], char ** envp) {
​
int offset = 0x30;
int number;
int retval;
int digit;
byte ascii_value;
​
retval = read(STDIN_FILENO, &ascii_value, 1);
​
while (retval == 1) {
​
    digit = ascii_value - offset;
    number = (number << 1) + digit;
    retval = read(STDIN_FILENO, &ascii_value, 1);
    
    }
    
    printf("%d\n", number);
    return 0;
    
    
    if (retval == 0) { 
    return 1;}
}
    
