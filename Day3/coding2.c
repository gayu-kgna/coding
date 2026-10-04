#include <stdio.h>

int countDigit(int n, int digit)
{
    if (n == 0)
        return 0;

    if (n % 10 == digit)
        return 1 + countDigit(n / 10, digit);
    else
        return countDigit(n / 10, digit);
}

int main()
{
    int n, digit, count;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    count = countDigit(n, digit);

    printf("Digit %d occurs %d time(s).", digit, count);

    return 0;
}
output:
Enter a positive integer: 1223452
Enter the digit to count: 2
Digit 2 occurs 3 time(s).
