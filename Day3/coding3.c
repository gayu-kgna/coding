#include <stdio.h>

int reverseNumber(int n, int reverse)
{
    if (n == 0)
        return reverse;

    return reverseNumber(n / 10, reverse * 10 + n % 10);
}

int main()
{
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = reverseNumber(n, 0);

    printf("Reversed number: %d", result);

    return 0;
}
output:
Enter a positive integer: 12345
Reversed number: 54321
