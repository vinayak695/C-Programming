
#include<stdio.h>
int main()
{
    char str[30];
    scanf("%[^\n]",str);

    int i=0,  vowels=0,  consonents=0;

    while (str[i]!='\0')
    {
        if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            vowels++;
        }
        else
        {
            consonents++;
        }i++;
        
    }
    printf("vowels are:%d\n",vowels);
    printf("consonents are:%d",consonents);
}    