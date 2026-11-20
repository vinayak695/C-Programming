#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char ch;

    printf("enter the string: ");
    scanf(" %[^\n]",str);

    printf("enter the character you want to search: ");
    scanf(" %c",&ch);

    // int i=0, size=0;
    // while (str[i]!='\0')
    // {
    //     i++;
    //     size++;
    // }

    int size= strlen(str);

    int flag=0;
    for(int i=0; i<size; i++)
    {
        if (ch==str[i])
        {
            printf("%d",i);
            flag=1;
        }
    }

    if (flag ==0 )
    {
        printf("not found");
    }
   
}