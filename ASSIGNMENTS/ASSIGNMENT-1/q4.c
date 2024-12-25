#include <stdio.h>

int main() {
    int input1, input2, input3;
    printf("Enter three numbers: ");
    int scanReturn = scanf("%d, %d, %d", &input1, &input2, &input3);
    printf("scan returned: %d", scanReturn);
    return 0;
}