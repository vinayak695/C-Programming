#include<stdio.h>
int main()
{
    int size;
    int sum=0; 
    float average;

    printf("Enter the size : ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements: ");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++)
    {
        sum=sum+arr[i];
        average = sum/size;
    }

    printf("sum is : %d",sum);
    printf("\nAverge is : %.2f",average);
} 
