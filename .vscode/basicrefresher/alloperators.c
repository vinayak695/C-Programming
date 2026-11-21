#include<stdio.h>
int main()
{
int num1,num2;
int num3,num4;
float num5,num6;
int num7,num8;

printf("enter two number:");
scanf("%d %d",&num1,&num2);
printf("enter the sub value:");
scanf("%d %d",&num3,&num4);
printf("enter dev value:");
scanf("%f %f",&num5,&num6);
printf("enter modules value:");
scanf("%d %d",&num7,&num8);

printf("sum is:%d\n",num1+num2);
printf("sub:%d\n",num3-num4);
printf("dev:%f\n",num5/num6);
printf("mod:%d\n",num7 % num8);
return 0;
}