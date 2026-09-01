// Exercise 1-13, page 24. Write a program to print a histogram of the frequencies of different_ characters
// in its input .

#include <stdio.h>

int main() {
    // Solution for Exercise 1-14
    // Test with: The quick brown fox jumps over the lazy dog
    int i, c;
    int letters[26] = {
        'a', 'b', 'c', 'd', 'e',
        'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o',
        'p', 'q', 'r', 'r', 't',
        'u', 'v', 'w', 'x', 'y',
        'z'
    };

    int nletter[26] = {0};  // Initialize the array elements to zero

    // Alternative way to initialize the array, but less safe because the for loop has to run before
    // running the array.
    // for (i = 0; i < 26; i++) {
    //     nletter[i] = 0;
    // }

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
