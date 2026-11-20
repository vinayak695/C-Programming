#include<stdio.h>
int main ()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    printf("enter the  nth position to set:");
    int n ;
    scanf("%d",&n);

     int res = num &(1<<n);

     printf("updated number is :%d",res);
}