#include<stdio.h>

 int fun(int num);

int main(){

    int num;
    printf("enter the numbers:");
    scanf("%d",&num);
   int res= fun(num);
   printf("Reverse numbers are: %d",res);


}
 int rev=0;
 int fun(int num)
 {
    while (num>0)
    {
    int digit=num%10;
    rev=(rev*10)+digit;
    num=num/10;
 }
 return rev;
}