#include<stdio.h>
int main()
{
    int arr[3][3];
    int sum=0;
    float average=0;

    printf("enter matrix elements: ");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Average of every row matrix are:\n");

    for(int i=0; i<3; i++)
    {
        sum=0;
        for(int j=0; j<3; j++)
        {

            sum=sum+arr[i][j];
            average=(float)sum/3;
        
        }
        printf("average of row %d = %.6f\n",i+1,average);
    }
 

}