#include<stdio.h>
int main()
{
    int size, i=0 ,start =0,end;

    printf("Enter the size");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements: ");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int temp;
    for(int i=0; i<size/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }

     for(int i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }
}