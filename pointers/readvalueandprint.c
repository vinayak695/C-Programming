#include<stdio.h>
int main(){
    
    char ch;
    char *ptr;
    ptr=&ch;
    
    printf("enter the input:");
    scanf("%c",&ch);
    
    printf("Character entered is %c",*ptr);
    
}