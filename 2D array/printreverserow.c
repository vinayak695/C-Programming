#include<stdio.h>
int main()
{
    int arr[3][3];
  
    printf("enter matrix elements: ");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("matrix elements are:\n");

    for(int i=0; i<3; i++)
    {
        for(int j=2; j>=0; j--)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}