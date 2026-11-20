#include <stdio.h>

int main()
{
    char str[50];

    printf("Enter string: ");
    scanf("%[^\n]", str);

    int i = 0, len = 0;
    while(str[i] != '\0')
    {
        i++;
    }

    i--;     // Count last word length

    while(i >= 0 && str[i] != ' ')
    {
        len++;
        i--;
    }

    printf("Last word length = %d", len);

    return 0;
}