#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    int pos;
    printf("enter the position:");
    scanf("%d",&pos);

    int n;
    printf("enter how many number you want to shift from position:");
    scanf("%d",&n);

    int res = num|((1<<n)-1)<<(pos-n+1);

    printf("updated number is :%d",res);

}