#include<stdio.h>
int main()
{
    int size,flag =0,i;

    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements: ");

    for(int i=0; i<size; i++)
        {
            scanf("%d",&arr[i]);
        }

    if(size <= 1)
        {
            printf("Array is in Wave Form");
            return 0;
        }


        if(arr[i] > arr[i+1])
            {
                flag =1;
            }
        else
            {
                flag = 0;
            }

    for(int i=0; i<size-1; i++)
    {
            if (flag == 1)
            {
                if(arr[i] < arr[i+1])
                {
                    printf("not wave form");
                    return 0;
                }
            }
                    
            else
            {
                if(arr[i] > arr[i+1])
                {
                    printf("not wave form");
                    return 0;
                } 
                    
            }

            flag = !flag;
    }

    printf("Array is in wave form");
}    
