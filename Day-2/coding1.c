#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end)
{
    while (start < end)
    {
        if (str[start] != str[end])
            return 0;

        start++;
        end--;
    }

    return 1;
}

int main()
{
    char str[100];
    int i, j;
    int start = 0, maxLength = 1;
    int length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = 0; i < length; i++)
    {
        for (j = i; j < length; j++)
        {
            if (isPalindrome(str, i, j))
            {
                if (j - i + 1 > maxLength)
                {
                    start = i;
                    maxLength = j - i + 1;
                }
            }
        }
    }

    printf("Longest Palindromic Substring: ");

    for (i = start; i < start + maxLength; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}

output:
Enter a string: babad
Longest Palindromic Substring: bab
