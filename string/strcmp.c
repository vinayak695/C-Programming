#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="hello";
    char str2[30]="hellow";

   int result= strcmp(str1,str2);
   printf("%d\n",result);

    if (result==0)
    {
        printf("both are equal");
    }
    else if (result <0)
    {
        printf("str1 is smaller");
    }
    else{
        printf("str1 is greater");
    }

}


