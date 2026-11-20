#include<stdio.h>

void reverse(int*ptr,int size);

int main(){
    int size;

    scanf("%d",&size);

    int arr[size];

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    reverse(arr,size);

    printf("Reverse array are:");
    for(int i=0; i<size; i++)
    {
        printf("%d",arr[i]);
    }

}

    void reverse(int*ptr,int size)
    {
        for(int i=0; i<size/2; i++)
        {
             int temp = ptr[i];
             ptr[i] = ptr[size-1-i];
             ptr[size-1-i] = temp;
        }
        
}