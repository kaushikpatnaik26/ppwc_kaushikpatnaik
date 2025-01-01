#include <stdio.h>

int sum_array(int *arr, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int a[4], b[4], c[4], d[4], sumarr[4];
    int *ptr_a = a, *ptr_b = b, *ptr_c = c, *ptr_d = d, *ptr_sum = sumarr;

    printf("Enter the elements for array A.\n");
    for (int i = 0; i < 4; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr_a + i);
    }

    printf("Enter the elements for array B.\n");
    for (int i = 0; i < 4; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr_b + i);
    }

    printf("Enter the elements for array C.\n");
    for (int i = 0; i < 4; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr_c + i);
    }

    printf("Enter the elements for array D.\n");
    for (int i = 0; i < 4; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr_d + i);
    }

    ptr_sum[0] = sum_array(a, 4);
    ptr_sum[1] = sum_array(b, 4);
    ptr_sum[2] = sum_array(c, 4);
    ptr_sum[3] = sum_array(d, 4);

    for (int i = 0; i < 4; i++) {
        printf("%d\t", *(ptr_sum + i));
    }
    return 0;
}