
#include <stdio.h>
#include <limits.h>

int main() {
    int a[100], n, i;
    int largest = INT_MIN;
    int second = INT_MIN;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n < 2 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > second) {
            second = a[i];
        }
    }

    if (second == INT_MIN)
        printf("Second largest element does not exist");
    else
        printf("Second largest element = %d", second);

    return 0;
}

output:
Input 5 elements: 10 25 8 20 15 
Output: Second largest element = 20
