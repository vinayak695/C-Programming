#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    char contact[11]; 
    char email[100];

    printf("enter your name: ");                                  
    scanf(" %[^\n]",name);

    printf("enter your phone number: ");
    scanf(" %10s",contact);

    printf("Enter Email ID: ");
    scanf(" %s", email);

    // to find name must contain at least 3 char

    int store= strlen(name);
    if (store <=3)
    {
        printf("Name must contain atleast 4 character");
        return 0;
    }


    // to find name must conatin only alphabets

    int i=0; 

    while(name[i]!='\0')
    {
        if ((name[i]>='A' && name[i]<='Z') || (name[i]>='a' && name[i]<='z'))
        {
           i++;  
        }
    
    // end 

    // space validation  

        else if(name[i] == ' ')
        {
            if (name[i+1] == ' ')
            {
                printf("between two names only one space is allowed");
                return 0;
            }
            i++;
        }
        
        
        else
        {
            printf("Name should contain only alphabets");
            return 0;
        } 

    } //  end


    // phone  number validation

    int contactlength = strlen(contact);
    {
        if (contactlength != 10)
        {
            printf("Phone number must contain exactly 10 digits :");
            return 0;
        }
    
    }
    
    // to check whether first digit  is between 6 t 9 or not

    if(contact[0] <'6' || contact[0] > '9')
{
    printf("first digit must be between 6 and 9");
    return 0;
}

// end

// to check if contact contain any character or symbol

    int j= 0;

    while(contact[j]!='\0')
    {
        if (contact[j]>='0' && contact[j]<='9')
        {
            j++;
        }
        else 
        {
            printf("Other then Digit any other character not allowed in phone number");
            return 0;
        }
        
        
    }

    // end

    // printf("\nyour name is : %s",str);  
    // printf("\nyour phone number is : %s\n",contact);
    // return 0;


    // email validation

    int m;
    int atCount = 0;
    int dotCount = 0;
    int atPos = -1;
    int dotPos = -1;

    // Check characters and count @ and .
    for(m = 0; email[m] != '\0'; m++)
    {
        if(email[m] >= 'a' && email[m] <= 'z')
        {
        }
        else if(email[m] >= '0' && email[m] <= '9')
        {
        }
        else if(email[m] == '@')
        {
            atCount++;
            atPos = m;
        }
        else if(email[m] == '.')
        {
            dotCount++;
            dotPos = m;
        }
        else
        {
            printf("Error Message : Invalid symbol");
            return 0;
        }
    }

    // Check @
    if(atCount == 0)
    {
        printf("Error Message : Missing @");
        return 0;
    }

    if(atCount > 1)
    {
        printf("Error Message : Multiple @ symbols are not allowed");
        return 0;
    }

    // Check .
    if(dotCount != 1)
    {
        printf("Error Message : Exactly one dot is required");
        return 0;
    }

    // Dot must be after @
    if(dotPos < atPos)
    {
        printf("Error Message : Dot must appear after @");
        return 0;
    }

    // At least one character between @ and .
    if(dotPos - atPos <= 1)
    {
        printf("Error Message : At least one character required between @ and .");
        return 0;
    }

    // Check .com at end
    int len = strlen(email);

    if(len < 4 ||
       email[len-4] != '.' ||
       email[len-3] != 'c' ||
       email[len-2] != 'o' ||
       email[len-1] != 'm')
    {
        printf("Error Message : Email must end with .com");
        return 0;
    }

    // printf("Valid Email ID");

    printf("\nyour name is : %s",name);  
    printf("\nyour phone number is : %s\n",contact);
    printf("your email is : %s",email); 
}

     
