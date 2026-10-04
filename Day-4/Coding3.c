#include <stdio.h>

int main()
{
    int a[100], b[100];
    int n1, n2;
    int i, j;
    int found;

    printf("Enter the size of first array: ");
    scanf("%d", &n1);

    printf("Enter the elements of first array: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of second array: ");
    scanf("%d", &n2);

    printf("Enter the elements of second array: ");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    printf("Intersection: ");

    for (i = 0; i < n1; i++)
    {
        found = 0;

        for (j = 0; j < n2; j++)
        {
            if (a[i] == b[j])
            {
                found = 1;
                break;
            }
        }

        if (found == 1)
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
output:
Enter the size of first array: 5
Enter the elements of first array: 1 2 3 4 5
Enter the size of second array: 5
Enter the elements of second array: 3 4 5 6 7
Intersection: 3 4 5
