#include<stdio.h>
int main()
{
    int size;
    int flag =0;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    int arr1[size];

    printf("Enter the first array elements: ");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the second array elements: ");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(int i=0; i<size; i++)
    {
       if( arr[i] != arr1[i])
        flag = 1;
    }
    if (flag)
    {
        printf("both array are not equal");
    }
    else
    {
        printf("both array are equal");
    
 }
}