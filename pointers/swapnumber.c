#include<stdio.h>

void swap(int *a, int *b);

int main(){
    int a=3;
    int b=9;
    swap(&a,&b);

    printf("A value is %d\n",a);
    printf("B value is %d\n",b);


}
    void swap(int *a, int *b)
    {
        int temp=*a;
        *a = *b;
        *b = temp;
    }