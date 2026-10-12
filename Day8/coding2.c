#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, new_n, i;
    int *arr;
    int *temp;

    printf("Enter the initial number of elements: ");
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
    }

    printf("Enter the new total size (greater than %d): ", n);
    if (scanf("%d", &new_n) != 1 || new_n <= n) {
        printf("New size must be greater than the initial size.\n");
        free(arr);
        return 1;
    }

    temp = (int *)realloc(arr, (size_t)new_n * sizeof(int));
    if (temp == NULL) {
        printf("Memory reallocation failed.\n");
        free(arr);
        return 1;
    }
    arr = temp;

    printf("Enter %d new integers: ", new_n - n);
    for (i = n; i < new_n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
    }

    printf("All array elements: ");
    for (i = 0; i < new_n; i++) {
        printf("%d", arr[i]);
        if (i < new_n - 1) printf(" ");
    }
    printf("\n");

    free(arr);
    return 0;
}
output:
Enter the initial number of elements: 3
Enter 3 integers: 10 20 30
Enter the new total size (greater than 3): 5
Enter 2 new integers: 40 50
All array elements: 10 20 30 40 50
