// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

    // Solution for Exercise 1-13
    // Test with: The quick brown fox jumps over the lazy dog
    //
    // Decided to plot it with a bar plot, not a histogram,
    // because the words have a integer length, which can be
    // considered as discrete categories, not continuous values.
    // X-axis -> Word lengths
    // Y-axis -> Frequency (number of words with the "x-axis" length)
    // Vertical bar plot:
    // "Vertical axis" is the x-axis
    // "Horizontal axis" is the y-axis

#include <stdio.h>

#define BLANK ' '
#define NEW_LINE '\n'
#define TAB '\t'

#define IN 1          // Inside a word
#define OUT 0         // Outside a word

#define MAX_WORDS 10  // Maximum words permitted in the input

int main(void) {

    int c, nw, nc, state;
    int word_lengths[MAX_WORDS] = {0};  // Array to store the length of each word in the input

    nw = nc = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        nc += 1;

        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }

        else if (state == OUT) {
            state = IN;
            nw += 1;
        }
    }

    // int i, c, nwhite, nother;
    // int ndigit[10];
    // for (i = 0; i < 10; i++) {
    //     ndigit[i] = 0;
    // }
    //
    // while ((c = getchar()) != EOF) {
    //
    //     if (c >= '0' && c <= '9') {
    //         ndigit[c - '0'] += 1;
    //     } else if (c == BLANK || c == NEW_LINE || c == TAB) {
    //         nwhite += 1;
    //     } else {
    //         nother += 1;
    //     }
    // }
    // printf("Digits = ");
    // for (i = 0; i < 10; i++) {
    //     printf("%d", ndigit[i]);
    // }
    // printf(", white space = %d, others = %d\n", nwhite, nother);

    printf("Number of words: %d\n", nw);
    printf("Chars: %d\n", nc);

    return 0;
}
