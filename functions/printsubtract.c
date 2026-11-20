#include<stdio.h>

int sum_of_two_num(int num1, int num2);
 
int main(){
    int num1,num2;
    printf("enter the number:");
    scanf("%d %d",&num1,&num2);
    int res = sum_of_two_num(num1,num2);

    {
        printf("%d\n",res);
    }

}
int sum_of_two_num(int num1, int num2)
{
    int sub=num1-num2;
    return sub;
}