#include<stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    int n=15 ;

    for(int i=n; i>=0; i--)

    {
        int res= num & (1<<i);

        if(res)
          {
          printf(" 1 ");
          }
        else
          {
          printf(" 0 ");  
          }   

    }
}