#include<stdio.h>

int count_digit ( int num);

int main(){
    int num;
    printf("enter the numbers:");
    scanf("%d",&num);

    int res= count_digit(num);
    printf("counts are: %d",res);

}
    int rev=0;
    int count=0;
    int count_digit ( int num)
    {
        while(num>0)
        {
        int digit=num%10;
        count++;
        rev=(rev*10)+digit;
        num=num/10;
        }return count;


    }