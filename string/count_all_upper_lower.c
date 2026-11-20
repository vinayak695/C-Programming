#include <stdio.h>

int main()
{
    char str[50];

    printf("Enter string: ");
    scanf("%[^\n]", str);

    int upper=0, lower=0, digit=0 , specialcharacter=0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z'))
        {
            str[i] = str[i] + 32;                        // Upper to Lower
            upper++;                                     
        }


        else if((str[i] >= 'a' && str[i] <= 'z'))
        {
            str[i] = str[i] - 32;                         // Lower to  Upper
            lower++;                                      
        }


         else if((str[i] >= '0' && str[i] <= '9'))
        {                                        
            digit++;                                     //count digit    
        }
        else 
        {                                        
            specialcharacter++;                                    //count special character    
        }
  
    }

    printf("Output: %s", str);
    printf("\nupper case are: %d", upper);
    printf("\nlower case are: %d", lower);
    printf("\ndigits are : %d", digit);
    printf("\nspecial characters are : %d", specialcharacter);

    return 0;
}