#include<stdio.h>
void fun(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;

    }
    printf("%d",i);
}

int main()
{
    char str[50];
    scanf("%[^\n]",str);

    fun(str);
}
