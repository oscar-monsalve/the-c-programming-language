/* Exercise 1-11, pag. 21. How would you test the word count program? What kinds of input are
   most likely to uncover a bugs if there are any?
   */

#include <stdio.h>

#define IN 1
#define OUT 0

/// Example program to count number of new lines, new words, and new charachters.
void count_example_program(void) {

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

        else if (state == OUT) {
            state = IN;
            nw += 1;
        }
    }

    printf("Lines: %d, Words: %d, Chars: %d\n", nl, nw, nc);
}

int main(void) {

    count_example_program();

    return 0;
}

// Exercise solution (CTRL + D to force EOF to end the program):
// - Input: no input. It should return 0, 0, 0 (new lines "nl", new words "nw", chars "c") -> OK.
// - Input: 1 character word. It should return 1 nl, 1 nw, 2 c (1 word and 1 new line "\n") -> OK.
// - Input: 2 character word. It should return 1 nl, 1 nw, 3 c -> OK.
// - Input: 2 one-character words. It should return 1 nl, 2 ne, 4 c -> OK.
// - Input: 2 one-character words, one word per line. It should return 2 nl, 2 ne, 4 c -> OK.
// The kinds of input most likely to uncover bugs are those that test boundary
// conditions. Some boundaries are:
//      - No input.
//      - No words, just newlines.
//      - No words, just blanks. tabs. and newlines.
//      - One word per line-no blanks and tabs.
//      - Word starting at the beginning of the line.
//      - Word starting after some blanks.
