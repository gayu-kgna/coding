#include <stdio.h>

int main()
{
    int n = 5;
    int i, j, space;
    int value;

    for (i = 0; i < n; i++)
    {
        // Print spaces
        for (space = 0; space < n - i; space++)
            printf("  ");

        value = 1;

        for (j = 0; j <= i; j++)
        {
            printf("%d   ", value);

            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
output:
          1
        1   1
      1   2   1
    1   3   3   1
  1   4   6   4   1
