#include<stdio.h>
int main(){
    
    int num;
    int *ptr;
    ptr=&num;
    
    printf("Enter the value of num:");
    scanf("%d",&num);
    
    printf("value is %d",*ptr);
}