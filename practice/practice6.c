#include<stdio.h>
int main(){
    int box1,box2,box3,temp;
    scanf("%d %d %d",&box1,&box2,&box3);

    temp=box3;
    box3=box1;
    box1=temp;
    printf("%d %d %d",box1,box2,box3);
}
