// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
// easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

#include <stdio.h>

#define BLANK ' '
#define NEW_LINE '\n'
#define TAB '\t'

int main(void) {
    // Solution for Exercise 1-13
    // Test with: The quick brown fox jumps over the lazy dog
    //
    // Decided to plot it with a bar plot, not a histogram,
    // because the words have a integer length, which can be
    // considered as discrete categories, not continuous values.
    // X-axis -> Word lengths
    // Y-axis -> Frequency (number of words with the x-axis length)
    // Vertical bar plot:
    // "Vertical axis" is the x-axis
    // "Horizontal axis" is the y-axis


    int i, c;
    int letters[26] = {

    };

    int nletter[26];
    for (i = 0; i < 26; i++) {
        nletter[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= 'a' && c <= 'z') {
            nletter[c - 'a'] += 1;
        }
    }

    // printf("Length of words:\n");
    for (i = 0; i < 26; i++) {
        printf("%c : %d\n", letters[i], nletter[i]);
    }

    // Example program to count the number of occurrences of digits, white space chars (blank, new line, tab),
    // and any other character.
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

    return 0;
}
