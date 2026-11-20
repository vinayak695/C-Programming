#include<stdio.h>
int main(){
    int age,service;
    printf("enter age and service");
    scanf("%d %d",&age,&service);
    if(age>=25)
    {
        if (service>=3)
        {
            printf("bonus eligible");    
        }
        else
        {
        printf("not eligible");
    }
   else
   {
    printf("not eligible");
}
}
}