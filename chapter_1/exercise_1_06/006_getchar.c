// Exercise 1-6, page 17.

#include <stdio.h>


int main(void) {
    int c;

    /* Copy input to output. 1st version */
    // c = getchar();
    // while (c != EOF) {
    //     putchar(c);
    //     c = getchar();
    // }


    /* Copy input to output. 2nd version */
    // while ( (c = getchar()) != EOF ) {
    //     putchar(c);
    // }

    /* Exercise 1-6: Verify that the expression 'getchar() != EOF' is 0 or 1*/
    printf("Is 'getchar() != EOF' 1 or 0?\nIt's %d\n", (c = getchar()) != EOF);

    return 0;
}

// NOTE: The expression getchar() != EOF is equal with 1 only if input char
// is != with EOF. A useful thing to know is that on Windows the EOF char is
// accessible with CTRL+Z, while on Unix-like systems the EOF char is
// accessible with CTRL+D.
