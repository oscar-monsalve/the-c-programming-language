/* Exercise 1-8, pag. 20. Write a program to count blanks, tabs and new lines */

#include <stdio.h>

int main(void) {
    int character, count_blanks, count_tabs, count_new_lines;

    count_blanks = 0;
    count_tabs = 0;
    count_new_lines = 0;
    while ((character = getchar()) != EOF) {

        if (character == ' ') {
            count_blanks += 1;
        }

        else if (character == '\t') {
            count_tabs += 1;
        }

        else if (character == '\n') {
            count_new_lines += 1;
        }
    }

    printf("Blanks\tTabs\tNew lines\n");
    for (int i = 0; i <= 24; i++) {
        printf("-");  // Print horizontal lines for the width of the table title
    }
    printf("\n");
    printf("%d\t%d\t%d\n", count_blanks, count_tabs, count_new_lines);


    // Character counting
    /* Count characters in input; 1st version using a while loop */
    // long nc;
    // nc = 0;
    // while (getchar() != EOF) {
    //     ++nc;
    // }
    // printf("%ld\n", nc);

    /* Count characters in input; 2st version using a for loop */
    // double nc;
    // for (nc = 0; getchar() != EOF; ++nc) {
    //     ;  // This is called a null statement used to satisfy that a for loop must have a body.
    // }
    // printf("%.0f\n", nc);


    // Line counting
    // int c, nl;
    // nl = 0;
    // while ( (c = getchar()) != EOF ) {
    //     if (c == '\n') {
    //         nl += 1;
    //     }
    // }
    // printf("%d\n", nl);

    return 0;
}
