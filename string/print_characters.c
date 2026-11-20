#include<stdio.h>
int main()
{

 char str[50];

 printf("enter the string:");
 scanf("%[^\n]",str);
  
    int i=0; 
    while(str[i]!='\0')
    {
        printf("%c\n",str[i]);
        i++;
    }

}
