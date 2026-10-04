#include <stdio.h>

int main()
{
    int n = 4;
    int i, j;

    // Upper half
    for (i = n; i >= 1; i--)
    {
        for (j = n; j > i; j--)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }

    // Lower half
    for (i = 2; i <= n; i++)
    {
        for (j = n; j > i; j--)
            printf(" ");

        for (j = 1; j <= 2 * i - 1; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}
output:
* * * * * * *
 * * * * *
  * * *
   *
  * * *
 * * * * *
* * * * * * *
