#include<stdio.h>
int main(){
    int num=678;                                                              
    int rev=0;
    int digit;

    digit=(num % 10);
    rev= ((rev*10)+digit);
    num= num/10;  
   
    digit=(num % 10);
    rev=((rev*10)+digit);
    num= num/10;
  
    digit=(num % 10);
    rev=((rev*10)+digit);
    num= num/10;
     
    printf("the reverse number is :%d",rev);

}