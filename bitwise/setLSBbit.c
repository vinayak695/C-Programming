#include<stdio.h>
int main(void)
{
    printf("enter the number:");
    int num;
    scanf("%d",&num);

   int res= num | 1;

    printf("updated number is :%b",res);

}