#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i;
    int *arr;
    long long sum = 0;
    double average;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    arr = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
        sum += arr[i];
    }

    average = (double)sum / n;
    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", average);

    free(arr);
    return 0;
}
output;
Enter the number of elements: 4
Enter 4 integers: 10 20 30 40
Sum = 100
Average = 25.00
