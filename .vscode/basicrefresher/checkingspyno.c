#include<stdio.h>
int main(){
    int digit;
    int sum=0;
    int num;
    int product;
    scanf("%d",&num);
    while(num !=0)
    {
    digit=num%10;
    sum=sum+digit;
    num=num/10;
    }
    printf("sum is %d ",sum);
    {
        product=sum*sum;
    }
    if(sum == product)
    {
        printf("Neon number");
    }
    else
    {
        printf("it is not neon");
    }    
    }
