#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    int arr1[size];

    printf("Enter the  elements: ");

    for(int i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<5; i++)
    {
        arr1[i] = arr[i];
    }

    printf("Elements of array1 are :");  

     for(int i=0; i<5; i++)
    {
        printf("%d",arr1[i]);
    }
}