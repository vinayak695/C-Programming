#include<stdio.h>
int main(){
    char str[50];
    char ch;

    printf("enter the string: ");
    scanf("%[^\n]",str);

    printf("enter the character you want to search for occurance: ");
    scanf(" %c",&ch);

    int i=0, size=0;
    while (str[i]!='\0')
    {
        i++;
        size++;
    }
    
    int count,flag=0;
    for(int i=0; i<size; i++)
    {
        if (ch==str[i])
        {
            count++;
            flag=1;
        }
    }

    printf("%d",count);
    
    if(flag==0)
    {
        printf("character not found");
    }
   
}