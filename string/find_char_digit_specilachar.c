
#include<stdio.h>
int main()
{
    char str[30];
    printf("enter the string:");
    scanf("%[^\n]",str);

    int i=0,  alphabets=0, digits=0,specialchar=0;

    while (str[i]!='\0')
    {
        if (str[i]>='a'&& str[i]<='z')
        {
            alphabets++;
        }
        else if(str[i]>='0'&& str[i]<='9')
        {
            digits++;
        }
        else
        {
            specialchar++;
        }
        i++;
        
    }

    printf("alphabets are:%d\n",alphabets);
    printf("digits are:%d\n",digits);
    printf("specialchar are:%d\n",specialchar);
}   