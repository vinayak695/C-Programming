#include<stdio.h>
int main(){
    int digit;
    int sum=0;
    int num;
    scanf("%d",&num);
    while(num !=0)
    {
    digit=num%10;
    sum=sum+digit;
    num=num/10;
    }
    printf("sum is %d ",sum);//till here sum will print
    
    if(num % sum)
    {
        printf("it is niven number");
    }
    else
    {
        printf("it is not niven");
    }    
    }
