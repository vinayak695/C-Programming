#include<stdio.h>
int main(){
    int  var,num;
    scanf("%d",&num);

    var=(num>0)? ((num%2==0)? printf("it is positive and even"): printf("it is positive and odd")):

        (num<0)? ((num%2==0)? printf("it  is negative and even"): printf("it is negative and odd"))
        : printf("Zero");
}