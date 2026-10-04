#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int frequency[256] = {0};
    int i, length;
    int found = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Count frequency of each character
    for (i = 0; i < length; i++)
    {
        frequency[(unsigned char)str[i]]++;
    }

    // Find first character with frequency 1
    for (i = 0; i < length; i++)
    {
        if (frequency[(unsigned char)str[i]] == 1)
        {
            printf("First Non-Repeating Character: %c", str[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("First Non-Repeating Character: -1");
    }

    return 0;
}

output:
Enter a string: swiss
First Non-Repeating Character: w

Enter a string: aabbcc
First Non-Repeating Character: -1
