#include <stdio.h>

long long integer_power(int base, int exponent) {
    long long result = 1;
    int i;

    for (i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int is_armstrong(long long number) {
    long long temp = number;
    long long sum = 0;
    int digits = 0;

    if (number == 0) {
        return 1;
    }

    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = number;
    while (temp > 0) {
        int digit = (int)(temp % 10);
        sum += integer_power(digit, digits);
        temp /= 10;
    }

    return sum == number;
}

int main(void) {
    long long limit, number;
    int found = 0;

    printf("Enter the limit: ");
    if (scanf("%lld", &limit) != 1 || limit < 1) {
        printf("Please enter a positive limit.\n");
        return 1;
    }

    printf("Armstrong numbers between 1 and %lld:\n", limit);
    for (number = 1; number <= limit; number++) {
        if (is_armstrong(number)) {
            printf("%lld ", number);
            found = 1;
        }
    }

    if (!found) {
        printf("None");
    }
    printf("\n");
    return 0;
}
output:
Enter the limit: 500
Armstrong numbers between 1 and 500:
1 2 3 4 5 6 7 8 9 153 370 371 407

