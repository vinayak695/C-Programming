#include<stdio.h>

int main()
{
    char str[50];

    printf("Enter a string : ");
    scanf("%[^\n]",str);

    // Find the length
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }

    int i =0;
    // convert the upper case into lower case
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++; 
    }

    // Filter the duplicates
    for (int i = 0; i < length; )
    {
        int duplicate = 0;

        for (int j = 0; j < i; j++)
        {
            if(str[i] == str[j])
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate)
        {
            for (int k = i; k < length; k++)
            {
                str[k] = str[k + 1];
            }
            length--;
            
        }
        else
        {
            i++;
        }   
        
    }

    // Start a loop
    int inc = 0;
    int found = 0;

    while (str[inc] != '\0')
    {
        if(str[inc] == ' ')
        {
            inc++;
        }
        if(str[inc] >= 'a' && str[inc] <= 'z')
        {
            found++;
            inc++;  
        }
    }

    // Condition check
    if(found == 26)
    {
        printf("Pangram\n");
    }
    else
    {
        printf("Not a pangram\n");
    }
    
    return 0;  
}