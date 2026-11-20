#include<stdio.h>
int find_largest(int num1,int num2);
    
int main(){
    int num1,num2; 

    printf("enter the number:");
    scanf("%d %d",&num1,&num2);

   int largest= find_largest(num1,num2);
   printf("largest is %d",largest);

   return 0;
}

    int find_largest(int num1,int num2)
    {
        if(num1>num2)
        return num1;
        else
        return num2;
    }