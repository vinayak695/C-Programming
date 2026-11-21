#include<stdio.h>
int main(){
    int age;
    printf("enter the number:");
    scanf("%d\n",&age);
    
    if (age <=18)
    {
        printf("he is eligible:\n");
    }
    else
    {    
        printf("he is not eligibe:\n");   
    }
    return 0;
}
