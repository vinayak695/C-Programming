#include<stdio.h>
struct detail
{
    int id;
    int age;
    char name[20];
    char address[20];
    char branch[20];

};

int main()
{
    struct detail s1[4];
    int flag =1;
    int detail_count=0;
    while(flag==1)
    {
        printf("enter the id:");
        scanf("%d",&s1[detail_count].id);

        printf("enter the age:");
        scanf("%d",&s1[detail_count].age);

        getchar();
        printf("enter teh name:");
        scanf("%[^\n]",s1[detail_count].name);

        getchar();
        printf("enter the address:");
        scanf("%[^\n]",s1[detail_count].address);

        getchar();
        printf("enter the branch:");
        scanf("%[^\n]",s1[detail_count].branch);

        detail_count++;

        printf("Do you want to continue:- (1->yes/0->no)");
        scanf("%d",&flag);

    }

    for(int i=0;i<detail_count; i++)
    {
        printf("Detail of students:-%d\n, i+1");
        printf("id:- %d",s1[i].id);
        printf("age :- %d", s1[i].age);
        printf("name:- %s",s1[i].name);
        printf("addres:- %s",s1[i].address);
        printf("branch:- %s",s1[i].branch);
    }
}

