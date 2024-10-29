#include <stdio.h>
#include <string.h>

int main()
{
    char n[500];
    printf("Enter a number of your choice having 0's and 1's : ");
    scanf("%s", &n);
    printf("Entered number is: %s\n", n);

   for (int i = 0; i < strlen(n); i++) {
        if (n[i] == '0') 
        {
            n[i] = '1';
        } 
        else if(n[i] == '1') 
        {
            n[i] = '0';
        }
    }

    printf("The updated number after replacement is : %s\n", n);
    return 0;
}