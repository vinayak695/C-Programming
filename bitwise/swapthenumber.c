#include<stdio.h>
int main()
{
    int x;
    printf("enter the x :");
    scanf("%d",&x);

    int y;
    printf("enter the y :");
    scanf("%d",&y);
    
    x=x^y;
    y=x^y;
    x=x^y;

    printf("updated number  :x is -->%d  y is --> %d",x,y);

}