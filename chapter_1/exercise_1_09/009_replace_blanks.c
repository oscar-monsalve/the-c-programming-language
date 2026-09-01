/* Exercise 1-9, pag. 20. Write a program to copy its input to its output,
   replacing each string of one or more blanks by a single blank */

#include <stdio.h>

#define NONBLANK 'a'  // Defining a random non-blank character
#define SINGLE_BLANK ' '     // Defining a SINGLE blank character

int main(void) {
    int character;

    int last_char = NONBLANK;  // Initializing last_char as a non-blank character

    while ((character = getchar()) != EOF) {

        if (character != SINGLE_BLANK || last_char != SINGLE_BLANK) {
            putchar(character);
        }

        last_char = character;
    }

    return 0;
}
