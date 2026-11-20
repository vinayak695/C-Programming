#include<stdio.h>

int fun(char *str1,char *str2);

int main()
{
    char str1[20];
    scanf("%[^\n]",str1);

    char str2[20];
    scanf(" %[^\n]",str2);

   int result= fun(str1,str2);
   
   printf("result is : %d\n",result);

   if (result == 0)
   {
    printf("both strings are equal");
   }
   else if (result<0)
   {
    printf("str1 is smaller");
   } 
   else if (result >0)
   {
    printf("str1 is greater");
   }

}

    int fun(char *str1,char *str2)
    {
        int i=0;
        while(str1[i]!='\0' && str2[i]!='\0')
        {
            if (str1[i]!=str2[i])
            {
                return str1[i]-str2[i];
            }i++;
        }
        return str1[i]-str2[i];
    }