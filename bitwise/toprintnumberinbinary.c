#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    for(int i=15; i>=0; i--)
    {
        int res= num & (1<<i);

        if (res)

        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
}    