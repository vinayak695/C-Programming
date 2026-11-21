#include <stdio.h>

int main() 
{
    int num;

    printf("enter the number: ");
    scanf("%d",&num);
    
    int num1 = num;
    int digit = 0;
    int rev = 0;
    
    for(int i=0; num != 0; i++)
    {
        digit = num % 10;
        rev = (rev*10) + digit;
        num = num/10;
    }
    
    if(num1 == rev)
    {
        printf("The Entered number is an palindrome\n");
    }
    else 
    {
       printf("The Entered number is not an palindrome\n"); 
    }
}