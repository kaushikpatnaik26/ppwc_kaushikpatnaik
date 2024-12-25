#include<stdio.h>
int main(){
int a =20;
int sum = 0;
for(int i=0; i<=a; i++){
    sum += i;
}
printf("sum of digits:%d \n", sum);
return 0;
}