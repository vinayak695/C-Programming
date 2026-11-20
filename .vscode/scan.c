#include <stdio.h>
int main()
{
    int age;
    char option;
    float height;
    double weight;

    printf("enter the age:\n");
    scanf("%d",&age);

    printf("enter the option:\n");
    scanf(" %c",&option);

    printf("enter the height:\n");
    scanf("%f",&height);

    printf("enter the weight:\n");
    scanf("%lf",&weight);   
    
    printf(" this is your data\n");
    
    printf("age is:%d\n",age);
    printf("option is:%c\n",option);
    printf("height is:%f\n",height);
    printf("weight is:%lf\n",weight);
    return 0;
}