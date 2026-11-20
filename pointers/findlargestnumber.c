
#include<stdio.h>

void largest(int *ptr,int size ,int *large);

int main(){
    
    int size;
    int large;
    printf("Enter the size");
    scanf("%d",&size);
    
    printf("Enter the elements");
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    largest(arr,size,&large);

    printf("largest is: %d",large);

}

    void largest(int *ptr,int size ,int *large)
    {
        *large =ptr[0];
        for(int i=1; i<size; i++)
        {
            if(*large<ptr[i])
            {
                *large=ptr[i];
            }
        }
    }