// Exercise 1-3, page 13.

#include <stdio.h>

/* Print Fahrenheit-Celsius table
   for fahr = 0, 20, ..., 300 */
int main()
{
    const int LOWER_BOUND = 0;
    const int UPPER_BOUND = 300;
    const int STEP = 20;
    float celsius;

    printf("°F\t°C\n");

    float fahr = LOWER_BOUND;
    while (fahr <= UPPER_BOUND) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);

        printf("%3.0f\t%6.1f\n", fahr, celsius);

        fahr += STEP;
    }

    return 0;
}
