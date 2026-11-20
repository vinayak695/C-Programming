#include<stdio.h>
int main()
{
    int size;

    printf("Enter the size:");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements: ");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int largest = arr[0];
    for(int i=1; i<size; i++)
    {
        if(largest<arr[i])
        {
            largest =arr[i];
        }
    }
    printf("largest is %d",largest);
}