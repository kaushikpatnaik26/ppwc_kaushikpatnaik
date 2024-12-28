#include <stdio.h>
int main() {
    // example with break
    printf("For switch case with break: \n");
    int a = 1;
    switch (a) {
    case 0:
        printf("a is 0.\n");
        break;
    case 1:
        printf("a is 1.\n");
        break;
    case 2:
        printf("a is 2.\n");
        break;
    }

    // example without break
    printf("For switch case without break: \n");
    switch (a) {
    case 0:
        printf("a is 0.\n");
    case 1:
        printf("a is 1.\n");
    case 2:
        printf("a is 2.\n");
    }
    return 0;
} 