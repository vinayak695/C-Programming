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

    int smallest = arr[0];
    for(int i=1; i<size; i++)
    {
        if(smallest > arr[i])
        {
            smallest =arr[i];
        }
    }
    printf("smallest is %d",smallest);
}