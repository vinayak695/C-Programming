#include<stdio.h>

int sum(int num3,int num4);

int main(){
    int num1,num2;
    printf("Enter two numbers:");
    scanf("%d %d",&num1,&num2);
  int stor = sum(num1,num2);
  printf("sum is : %d",stor);

}
int sum(int num1,int num2)
{
    int sum=num1+num2;
    return sum;
}