#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    int arr[size];
    int arr1[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr1[i]);
    }

    printf("Common elements in two array are: ");
    
    for(int i=0; i<size; i++)
    {

        int already =0;
        for(int j=0; j<i; j++)
        {
            if(arr[i] == arr[j])
            {
                already = 1;
                break; 
            }
        
        }

        if (already)
            {
                continue; 
            }
            
        for(int j=0; j<size; j++)
        {
            if(arr[i] == arr1[j])
            {
                printf("%d",arr[i]);
                break;
            }
        }
    }   
}