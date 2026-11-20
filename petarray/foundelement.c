#include<stdio.h>
int main()
{
    int size;

    printf("Enter the size");
    scanf("%d",&size);

    int n;
    printf("Enter element to find : ");
    scanf("%d",&n);

    int arr[size];

    printf("Enter the elements: ");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int found = 0;

    for(int i=0; i<size; i++)
    {
        if(n == arr[i])
        found = 1;
    }

    if(found)
        printf("elements found");
    else
    {
        printf("not found");
    }
}