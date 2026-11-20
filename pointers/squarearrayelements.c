#include<stdio.h>

void square (int *ptr, int size);

int main(){
    
    int size;
    scanf("%d",&size);
    
    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
     
    printf("Array elements before squaring:");
   for(int i=0; i<size; i++)
   {
    printf("%d",arr[i]);
   }
    
    square (arr,size);
    
    printf("\n Array elements after squaring:");
     for(int i=0; i<size; i++)
   {
    printf("%d",arr[i]);
   }
   
    return 0;
    
}
    
     void square (int *ptr, int size)
    {
        for(int i=0; i<size; i++)
        {
           ptr[i]= ptr[i]*ptr[i];
        }
        
    }
    
    