#include<stdio.h>
int main()
{
    char student_name [10];
    int physics_marks;
    int mathematic_marks;
    int cprogramming_marks;
    printf("enter student_name:");
    scanf(" %s",&student_name);
    printf("enter physic_marks:");
    scanf("%d",&physics_marks);
    printf("enter mathematic_marks:");
    scanf("%d",&mathematic_marks);
    printf("enter cprogramming_marks:");
    scanf("%d",&cprogramming_marks);
     
    printf("\tall student report:\t\n");
    printf("name:%s\n",student_name);
    printf("physics:%d\n",physics_marks);
    printf("mathematics:%d\n",mathematic_marks);
    printf("C Programming:%d\n",cprogramming_marks);
    return 0;
    
}