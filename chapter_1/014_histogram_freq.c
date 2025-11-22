// Exercise 1-13, page 24. Write a program to print a histogram of the frequencies of different_ characters
// in its input .

#include <stdio.h>

int main() {
    // Solution for Exercise 1-14
    // Test with: The quick brown fox jumps over the lazy dog
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

    return 0;
}
