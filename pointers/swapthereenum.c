#include<stdio.h>

void swapthree(int*a, int *b, int *c);

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    swapthree(&a,&b,&c);

    printf("a==> %d b==> %d c==> %d",a,b,c);

}
    void swapthree(int*a, int *b, int *c)
    {
        int temp = *b;
              *b = *a;
              *a = *c;
              *c = temp;
    }