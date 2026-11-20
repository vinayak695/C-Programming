#include<stdio.h>

void find(int *ptr, int size, int *secondsmallest,int *secondlargest);

int main()
{
    int size,secondsmallest,secondlargest; 
    scanf("%d",&size);
    
    int arr[size];
    for(int i=0; i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    find(arr,size,&secondsmallest,&secondlargest);

    printf("second smallest is :%d",secondsmallest);
    printf("\nsecond largest is :%d",secondlargest);


}

    void find(int *ptr, int size, int *secondsmallest,int *secondlargest)

    {
        int largest=ptr[0];
        for(int i=1; i<size; i++)
        {
            if (largest<ptr[i])
            {
                largest=ptr[i];
            }

        }

        *secondlargest=ptr[0];
        for(int i=1; i<size; i++)
        {
            if (ptr[i]!=largest && ptr[i]> *secondlargest)
            {
                *secondlargest=ptr[i];
            }
        }

        int smallest=ptr[0];
        for(int i=1; i<size; i++)
        {
            if (ptr[i] < smallest)
            {
                smallest =ptr[i];
            }
            
        }

        *secondsmallest=ptr[0];
        for(int i=1; i<size; i++)
        {
            if (ptr[i]!=smallest && ptr[i]< *secondsmallest)
            {
                *secondsmallest=ptr[i];
            }
        }

    }