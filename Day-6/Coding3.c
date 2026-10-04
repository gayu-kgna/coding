#include <stdio.h>

struct Book
{
    char title[100];
    char author[50];
    float price;
};

int main()
{
    struct Book b;

    printf("Enter book title: ");
    scanf("%s", b.title);

    printf("Enter author name: ");
    scanf("%s", b.author);

    printf("Enter book price: ");
    scanf("%f", &b.price);

    printf("\nBook Details\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %.2f\n", b.price);

    return 0;
}
Output:
Enter book title: CProgramming
Enter author name: Dennis
Enter book price: 450

Book Details
Title: CProgramming
Author: Dennis
Price: 450.00
