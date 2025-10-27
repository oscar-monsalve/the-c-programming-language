/* Exercise 1-11,
   */

#include <stdio.h>

#define IN 1
#define OUT 0

int main(void) {

    // Program to count number of new lines, new words, and new charachters.

    int c, nw, nl, nc, state;

    nw = nl = nc = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        nc += 1;

        if (c == '\n') {
            nl += 1;
        }

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }

        else if (c == IN) {
            state = IN;
            nw += 1;
        }
    }

    printf("Lines: %d, Words: %d, Chars: %d\n", nl, nw, nc);

    return 0;
}
