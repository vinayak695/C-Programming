#include<stdio.h>
struct student
{
    int id;
    int age;
    char name[20];
    char address[20];
};
void display(struct student*ptr);
int main()
{
    
    struct student s1;       

    printf("enter the id:");
    scanf("%d",&s1.id);

    printf("entre the age:");
    scanf("%d",&s1.age);

    getchar();
    printf("enter the name:");
    scanf("%s",&s1.name);

    getchar();
    printf("enter the address:");
    scanf("%s",&s1.address);

    display(&s1);

    printf("age is %d",s1.age);


}

    void display(struct student*ptr)
    {
        printf("inside sub function\n");

        printf("id is %d\n",ptr->id); 
        printf("age is %d\n",ptr->age);
        printf("name is %s\n",ptr->name);
        printf("address is %s\n",ptr->address);

         ptr-> age=40;
         printf("age is %d\n",ptr->age);
    }