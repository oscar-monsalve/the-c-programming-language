/* Exercise 1-10, pag. 20.  Write a program to copy its input to its output,
   replacing each tab by \t , each backspace by \b, and each backslash by \\.
   This makes tabs and backspaces visible in an unambiguous way.
   */

#include <stdio.h>

#define TAB       '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'

int main(void) {
    int c;

    while ((c = getchar()) != EOF) {

        if (c == TAB) {
            printf("\\t");
        }

        if (c == BACKSPACE) {
            printf("\\b");
        }

        if (c == BACKSLASH) {
            printf("\\\\");
        }

        if (c != TAB || c != BACKSPACE || c != BACKSLASH) {
            putchar(c);
        }
    }

    return 0;
}
