// Exercise 1-4, page 13.

#include <stdio.h>

/* Print Celsius-Fahrenheit table
   for celsius = 0, 20, ..., 300 */
int main(void) {
    const int LOWER_BOUND = 0;
    const int UPPER_BOUND = 300;
    const int STEP = 20;
    float fahr;

    printf("°C\t°F\n");

    float celsius = LOWER_BOUND;
    while (celsius <= UPPER_BOUND) {
        fahr = ((9.0 / 5.0) * celsius) + 32.0;

        printf("%3.0f\t%6.1f\n", celsius, fahr);

        celsius += STEP;
    }

    return 0;
}
