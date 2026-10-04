#include <stdio.h>

int main()
{
    int a[100], n;
    int i;
    int currentSum, maxSum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    currentSum = a[0];
    maxSum = a[0];

    for (i = 1; i < n; i++)
    {
        if (currentSum + a[i] > a[i])
            currentSum = currentSum + a[i];
        else
            currentSum = a[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum subarray sum: %d", maxSum);

    return 0;
}
output:
Enter the number of elements: 9
Enter the elements: -2 1 -3 4 -1 2 1 -5 4
Maximum subarray sum: 6
