
//  check all alphabets are present or not 


#include <stdio.h>

int main()
{
    char str[200];
    int found[26] = {0};

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            found[str[i] - 'A'] = 1;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            found[str[i] - 'a'] = 1;
        }
    }

    int pangram = 1;

    for(int i = 0; i < 26; i++)
    {
        if(found[i] == 0)
        {
            pangram = 0;
            break;
        }
    }

    if(pangram)
        printf("Pangram");
    else
        printf("Not Pangram");

    return 0;
}