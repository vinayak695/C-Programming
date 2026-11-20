#include<stdio.h>

int power_of_number(int base,int exponent);

int main(){
    int base,exponent;
    scanf("%d %d",&base,&exponent);

    int res = power_of_number(base,exponent);
    printf("power is : %d",res);

}

    int power_of_number(int base,int exponent)
    {
        int power=0;
        for(int i=0; i<=exponent; i++)
        {
            power=base*i;
        }
        return power;
    }