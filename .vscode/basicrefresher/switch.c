#include <stdio.h>
int main(){
    int age,marks;

    printf("enter the age :");
    scanf("%d",&age);

    printf("enter the marks:");
    scanf("%d",&marks);

    switch(age)
    {       
    case 3:
           printf("age is 3\n");
        
    switch(marks)  
    {  
    case 4:
           printf("marks are 4\n");
           break;

    default:
           printf("your marks are not in range");
}
    default:
        printf("your age is not in range");
}

}