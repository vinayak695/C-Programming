#include<stdio.h>

int multiply_num(int a);

int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);

   int store = multiply_num(num);
printf("square number is :%d",store);

}
    int multiply_num(int num)
    {
    int square=num*num;
        return square;
    }