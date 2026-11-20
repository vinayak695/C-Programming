#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];
    printf("enter the string:");
    scanf("%[^\n]",str);

    int i=0 , size=0;
    while(str[i]!='\0')
    {
        i++;
        size++;
    }
    
    for( i=0; i<size/2;i++)
    {
    int temp=str[i];
    str[i]= str[size-1-i];
    str[size-1-i]=temp;

    }
    printf("reverse character is:");

    i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    
    }

}