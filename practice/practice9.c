#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a %3==0 && a %5==0)
    {
        printf("yes it is divisible");
    }
    else{
        printf("it is not divisible");
    }
}