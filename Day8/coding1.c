#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i;
    int *arr;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    arr = (int *)calloc((size_t)n, sizeof(int));
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
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) largest = arr[i];
        if (arr[i] < smallest) smallest = arr[i];
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    free(arr);
    return 0;
}
output:
Enter the number of elements: 5
Enter 5 integers: 10 25 5 40 15
Largest element = 40
Smallest element = 5
