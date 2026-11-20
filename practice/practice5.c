#include<stdio.h>
int main(){
    int sub1,sub2,sub3,sub4,sub5,total;
    float average,percentage;
    printf("enter 5 subject marks:");
    scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);

    total=sub1+sub2+sub3+sub4+sub5;
    average= total/5.0;
    percentage=(total/500.0)*100;

    printf("total is %d\n",total);
    printf("average is %.2f\n",average);
    printf("percentage is %.2f%\n",percentage);

}
