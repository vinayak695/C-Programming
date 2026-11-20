#include<stdio.h>

int prime_number(int num);

int main(){
    int num;
    scanf("%d",&num);

   int res = prime_number(num);
   if(res==2)
   {
    printf("It is prime number");
   }
   else
   {
    printf("Not a prime number");
   }
}

    int prime_number(int num)
    {
        int count=0;
        for(int i=1; i<=num; i++)
        {
        if(num % i==0)
        {
            count++;
        }
    }return count;
}