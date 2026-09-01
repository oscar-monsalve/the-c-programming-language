// Exercise 1-12, page 21. Write a program that prints its input one word per line.

# include <stdio.h>

#define TAB '\t'
#define NEW_LINE '\n'
#define BLANK ' '

#define IN 1   // Inside a word
#define OUT 0  // Outside a word

int main(void) {
    int c, state;
    state = OUT;

    while ((c = getchar()) != EOF) {

        if (c == BLANK || c == NEW_LINE || c == TAB) {
            if (state == IN) {
                putchar(NEW_LINE);  // Finish each word with a new line
                state = OUT;
            }
        } else if (state == OUT) {
            putchar(c);
            state = IN;  // Beginning of word
        } else {
            putchar(c);  // Inside a word
        }
    }

    return 0;
}
