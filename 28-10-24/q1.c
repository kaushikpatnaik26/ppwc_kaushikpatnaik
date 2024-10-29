#include <stdio.h>
int main() {
int item;
int product = 1; 
printf("Enter a value for item: ");
scanf("%d", &item);
if (item != 0) {
    product *= item; 
    }
printf("The value of product is: %d\n", product);
return 0;
}

