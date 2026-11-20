#include<stdio.h>

void fun (int row, int column, int (*ptr)[column]);

int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    {
        fun(3,3,arr);
    }

}
    void fun (int row, int column, int (*ptr)[column])
    {
        for (int i=0; i<row; i++)
        {
            for(int j=0; j<column; j++)
            {
                printf("%d ",ptr[i][j]);
            }
            printf("\n");
        }
    }
