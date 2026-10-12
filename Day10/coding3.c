#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide_numbers(int a, int b) {
    return (double)a / b;
}

int modulus(int a, int b) {
    return a % b;
}

int main(void) {
    int choice, a, b;

    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (choice == 6) {
            printf("Exiting calculator.\n");
            break;
        }

        if (choice < 1 || choice > 5) {
            printf("Invalid choice. Please select 1 to 6.\n");
            continue;
        }

        printf("Enter two integers: ");
        if (scanf("%d %d", &a, &b) != 2) {
            printf("Invalid numbers.\n");
            return 1;
        }

        switch (choice) {
            case 1:
                printf("Result = %d\n", add(a, b));
                break;
            case 2:
                printf("Result = %d\n", subtract(a, b));
                break;
            case 3:
                printf("Result = %d\n", multiply(a, b));
                break;
            case 4:
                if (b == 0) {
                    printf("Error: division by zero is not allowed.\n");
                } else {
                    printf("Result = %.2f\n", divide_numbers(a, b));
                }
                break;
            case 5:
                if (b == 0) {
                    printf("Error: modulus by zero is not allowed.\n");
                } else {
                    printf("Result = %d\n", modulus(a, b));
                }
                break;
        }
    } while (1);
--- Calculator Menu ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 1
Enter two integers: 10 5
Result = 15

--- Calculator Menu ---
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
Enter your choice: 6
Exiting calculator.
    return 0;
}
output:


oup
