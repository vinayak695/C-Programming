#include<stdio.h>
int main(){
    char str[20];
    char cpy[20];

    scanf("%[^\n]",str);

      int i=0;
    while(str[i]!='\0')
    {
        cpy[i] = str[i];
        i++;
       
    }

    int size=0;                       
    i=0;
    while(str[i]!='\0')
    {
        i++;
        size++;
    }

    for( i=0; i<size/2; i++)
    {
        int temp = str[i];
        str[i]= str[size-1-i];
        str[size-1-i]=temp;
    }

     i=0; 
    while(str[i]!='\0')
    {
        
        if(cpy[i]!=str[i])
        {
            printf("Not a palandrome");
            return 0;
        }
          i++;
    }      

         printf("it is a palandrome");
         return 0;
    }