#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, temp;

    int *start;
    int *end;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    start = arr;
    end = arr + n - 1;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reversed array: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
output;
Enter the number of elements: 5
Enter the array elements: 10 20 30 40 50
Reversed array: 50 40 30 20 10
