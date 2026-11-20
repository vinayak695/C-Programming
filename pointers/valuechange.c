#include<stdio.h>

void change(float *ptr);

int main(){
    
    float age;
    scanf("%f",&age);
    
    change(&age);
    printf("Age after increasing by 20 is %.1f",age);
    
}
    void change(float *ptr)
    {
        *ptr=*ptr+20;
    }
    
    