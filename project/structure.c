// #include<stdio.h>
// #include<string.h>
#include<stdlib.h>


// int main()
// {
//     char name[50];
//     char phone[11]; 
//     char email[100];

    void createContact(AddressBook * addressBook)
    {
        Contact newContact;
    
    printf("enter your name: ");                                  
    scanf(" %[^\n]",newContact.name);

    printf("enter your phone number: ");
    scanf(" %10s",newContact.phone);

    printf("Enter Email ID: ");
    scanf(" %s", newContact.email);

    // name length validation atlest 3 char

    int store= strlen(newContact.name);
    if (store <=3)
    {
        printf("Name must contain atleast 4 character");
        return ;
    }


    // name  validation

    int i=0; 

    while(newContact.name[i]!='\0')
    {
        if ((newContact.name[i]>='A' && newContact.name[i]<='Z') || 
        (newContact.name[i]>='a' && newContact.name[i]<='z'))

        {
           i++;  
        }
    
    // end 

    // space validation  

        else if(newContact.name[i] == ' ')
        {
            if (newContact.name[i+1] == ' ')
            {
                printf("between two names only one space is allowed");
                return ;
            }
            i++;
        }
        
        
        else
        {
            printf("Name should contain only alphabets");
            return ;
        } 

    } //  end


    // phone  number validation

    int contactlength = strlen(newContact.phone);
    {
        if (contactlength != 10)
        {
            printf("Phone number must contain exactly 10 digits :");
            return ;
        }
    
    
    
    // to check whether first digit  is between 6 t 9 or not

    if(newContact.phone[0] <'6' || newContact.phone[0] > '9')
{
    printf("first digit must be between 6 and 9");
    return ;
}

// end

// to check if contact contain any character or symbol

    int j= 0;

    while(newContact.phone[j]!='\0')
    {
        if (newContact.phone[j]>='0' && 
            newContact.phone[j]<='9')

        {
            j++;
        }
        else 
        {
            printf("Other then Digit any other character not allowed in phone number");
            return ;
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
    for(m = 0; newContact.email[m] != '\0'; m++)
    {
        if(newContact.email[m] >= 'a' && newContact.email[m] <= 'z')
        {
        }
        else if(newContact.email[m] >= '0' && newContact.email[m] <= '9')
        {
        }
        else if(newContact.email[m] == '@')
        {
            atCount++;
            atPos = m;
        }
        else if(newContact.email[m] == '.')
        {
            dotCount++;
            dotPos = m;
        }
        else
        {
            printf(" Invalid symbol");
            return ;
        }
    }

    // Check @
    if(atCount == 0)
    {
        printf(" Missing @ ");
        return ;
    }

    if(atCount > 1)
    {
        printf("Multiple @ symbols are not allowed");
        return ;
    }

    // Check .
    if(dotCount != 1)
    {
        printf("Exactly one dot is required");
        return ;
    }

    // Dot must be after @
    if(dotPos < atPos)
    {
        printf("Dot must appear after @");
        return ;
    }

    // At least one character between @ and .
    if(dotPos - atPos <= 1)
    {
        printf("Error Message : At least one character required between @ and .\n");
        return ;
    }

    // Check .com at end
    int len = strlen(newContact.email);

    if(len < 4 ||
       newContact.email[len-4] != '.' ||
       newContact.email[len-3] != 'c' ||
       newContact.email[len-2] != 'o' ||
       newContact.email[len-1] != 'm')
    {
        printf("Error Message : Email must end with .com\n");
        return ;
    }


//    printf("\nYour name is : %s", newContact.name);
//    printf("\nYour phone number is : %s", newContact.phone);
//    printf("\nYour email is : %s\n", newContact.email);
    
    //  to store contact in address book

    addressBook->contacts[addressBook->contactCount] = newContact;
    addressBook->contactCount++;

    }
}    
     
