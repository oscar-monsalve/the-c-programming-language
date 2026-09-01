// Exercise 1-2, page 8.

#include <stdio.h>

int main(void) {
    printf("Hello, World\c");  // The escape character "/c" is not defined.
    return 0;
}

// The Reference Manual (Appendix A, page 193 K&R) states:
//     If the character following the \ is not one of those specified, the behavior is undefined.
// The result of this experiment is compiler dependent.
