// Exercise 1-5, page 14.

#include <stdio.h>

/* Print Celsius-Fahrenheit table
   for celsius = 300, 20, ..., 0.
   Also using symbolic names with '#define'.
   */

/* The quatities LOWER, UPPER, STEP are symbolic constants, not variables,
   so they do not appear in declarations.
   Symbolic constants names are conventionally written in upper case so
   they can be readily ditinguished from lower case variable names.
   */

#define LOWER 0
#define UPPER 300
#define STEP 20


int main()
{
    printf("°C\t°F\n");

    for (int celsius = UPPER; celsius >= LOWER; celsius -= STEP) {
        printf("%3d\t%6.1f\n", celsius, ((9.0 / 5.0) * celsius) + 32.0);
    }

    return 0;
}
