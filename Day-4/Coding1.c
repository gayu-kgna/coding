#include <stdio.h>

int main()
{
    int a[100], n;
    int i, j = 0, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Move all non-zero elements to the front
    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeros to the end: ");

    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
output:
Enter the number of elements: 5
Enter the elements: 0 1 0 3 12
Array after moving zeros to the end: 1 3 12 0 0
