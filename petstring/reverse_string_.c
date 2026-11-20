#include<stdio.h>
int main()
{
    char str[100];
    scanf(" %99[^\n]",&str);
    int i=0, start = 0, temp, end;

    while(1)
    {
        if(str[i] == ' ' || str[i] == '\0' )
        {

                end= i-1;

            while(start<end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;

            }   

                start = i+1;    
                if(str[i] == '\0')
                break;    
        
       }

        i++;
    
    }
        printf("reverse string is %s\n " ,str); 
        return 0;
}