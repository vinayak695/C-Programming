#include<stdio.h>
int main(){
    int a=50;
    int b=60;

    a=a+b;
    b=a-b;
    a=a-b;
    {
        printf("swap number  a : %d\n",a);
        printf("swap number  b : %d\n",b);
    }
    
}