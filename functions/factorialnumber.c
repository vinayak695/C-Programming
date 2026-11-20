#include<stdio.h>

int fact(int num);

int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    int stor=fact(num);
    printf("%d",stor);
}
    int fact(int num)
    {
        int fact=1;
        for(int i=1; i<=num; i++)
        {
             fact=fact*i;
        }
        return fact;
    }
