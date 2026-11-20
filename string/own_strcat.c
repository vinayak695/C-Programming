#include<stdio.h>

void mystrcat(char *str1,char*str2);

int main()
{
    char str1[]="hello";
    char str2[]="world";

    mystrcat(str1,str2);
    printf("%s",str1);


}

    void mystrcat(char *str1,char*str2)
    {
        int i=0, length=0;
        while(str1[i]!='\0')
        {
            i++;
            length ++;
        }
     
        int k=length;
        int j=0;

        while(str2[j]!='\0')
        {
            str1[k]=str2[j];
            k++;
            j++;
        }
        
        str1[k]='\0';
    }