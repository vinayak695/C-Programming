#include<stdio.h>

int main()
{
    int i, num;
    int rev = 0;
    int digit;

    scanf("%d", &num);

    if(num < 0)
    {
        printf("Enter the positive number");
        return 0;
    }
    else
    {
        for(i = 1; num != 0; i++)
        {
            digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }
    }

    printf("The reverse number is %d", rev);
}