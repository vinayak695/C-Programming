#include<stdio.h>

void maxmin(int *ptr ,  int size , int*min ,int*max);

int main(){
    
    int size;
    int min,max;

    printf("Enter the size");
    scanf("%d",&size);
    
    printf("Enter the elements");
    int arr[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    maxmin(arr,size,&min,&max);

    printf("Maximum number is : %d",max);
    printf("\nManimum number is : %d",min);
}
    void maxmin(int *ptr ,  int size , int*min ,int*max)
    {
        *min = ptr[0];
        *max = ptr[0];

        for(int i=1; i<size; i++)
        {
            if(*min<ptr[i])
            {
                *max=ptr[i];
            }
            else if (*min>ptr[i])
            {
                *min=ptr[i];
            }
            
        }
    }