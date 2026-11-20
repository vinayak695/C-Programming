#include<stdio.h>

int fun(int num);

int main(){
    int num=3;
   int res= fun(num);
   printf("%d",res);
}
int fun(int num)
{
    static int sum=0;
    if(num>0)
    {
        sum=sum+num;
        fun(num-1);
    }
    return sum;
}