#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data ;
    struct node *next;

}slist;

int main()
{

    slist *head = NULL;
    slist *newnode ,*temp;

    int choice=1;

    while(choice)
    {
        newnode=(slist*)malloc(sizeof(slist));

    if(newnode == NULL)
    {
        printf("memory is not allocated");
        return 1;
    }
    printf("enter the data: ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;

    if (head == NULL)
    {
        head = temp = newnode; 
    }
    else
    {
        temp -> next = newnode;
        temp = newnode;
    }
    printf("Want to continue (0/1): ");
    scanf("%d",&choice);
}    

    printf("linked list\n");
    temp = head;

    while(temp != NULL)
    {
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("NULL\n");

}                