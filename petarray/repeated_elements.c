#include<stdio.h>
int main()
{
    int size;

    printf("Enter the size");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements: ");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int found=0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                if(found == 0)
                {
                    printf("Repeated elements are: ");
                }
                printf("%d",arr[i]);
                found =1;
                break;

            }
        
        }
        
    }
    if(found == 0)
    {
        printf("Repeated elements  are not found");
    }
}