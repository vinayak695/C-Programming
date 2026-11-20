#include<stdio.h>
int main(){
    int length,breadth,area,perimeter;
    printf("enter the three number");
    scanf("%d %d",&length,&breadth);
    
    area=length*breadth;
    perimeter=2*(length+breadth);
    
    printf("area is %d\n",area);
    printf("perimeter is %d\n",perimeter);
}