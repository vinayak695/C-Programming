#include <stdio.h>

int armstrong(int num);

int main(){

    int num;
    printf("enter the number:");
    scanf("%d",&num);
  
   int res= armstrong(num);
   if(res)
   {
    printf("It is armstrong number");
   }
   else
   {
    printf("It is not and armstrong number");
   }


}

    int armstrong(int num)
{
    int sum=0;
    int num1=num;
    while(num>0)
    {
        int digit=num%10;
        sum=sum+digit*digit*digit;
        num=num/10;

    }if(num1==sum)
    {
        return 1;
    }
    else{
        return 0;
    }
}fffff

