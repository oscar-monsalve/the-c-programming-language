// Exercise 1-6, pag. 17.

#include <stdio.h>


int main() {
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
    // In Linux, EOF can be simulated in the keyboard by pressing "crtl + D"
    printf("Is 'getchar() != EOF' 1 or 0?\nIt's %d\n", (c = getchar()) != EOF);

    return 0;
}
