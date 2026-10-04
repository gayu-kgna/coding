#include <stdio.h>

int main()
{
    int arr[100];
    int n, i;
    int max, min;

    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    max = *ptr;
    min = *ptr;

    for (i = 1; i < n; i++)
    {
        ptr++;

        if (*ptr > max)
            max = *ptr;

        if (*ptr < min)
            min = *ptr;
    }

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
Output:
Enter the number of elements: 5
Enter the array elements: 25 10 45 5 30
Maximum element: 45
Minimum element: 5
