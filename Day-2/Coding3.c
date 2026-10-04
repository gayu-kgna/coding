#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int visited[256] = {0};
    int i, length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    printf("String after removing duplicates: ");

    for (i = 0; i < length; i++)
    {
        if (visited[(unsigned char)str[i]] == 0)
        {
            printf("%c", str[i]);
            visited[(unsigned char)str[i]] = 1;
        }
    }

    return 0;
}
output:

Enter a string: programming
String after removing duplicates: progamin

Enter a string: banana
String after removing duplicates: ban
