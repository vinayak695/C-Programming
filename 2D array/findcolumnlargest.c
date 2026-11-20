#include<stdio.h>
int main()
{
    int arr[3][3];
    int largest;

   

    printf("enter the matrix elements are :");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(int j=0; j<3; j++)
    {
        largest =arr[0][j];

        for(int i=1; i<3; i++)
        {
            if(largest < arr[i][j])
            {
                largest = arr[i][j];
            }
        }
        printf("largest element in column %d = %d\n",j+1,largest);
        
    }
    
}
