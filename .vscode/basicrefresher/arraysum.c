#include<stdio.h>
int main(){
    
    int size;
    float average;

    printf("Enter the size");
    scanf("%d",&size);
    
    int arr [size];
    
    printf("Enter the elements:");
    for (int i=0 ; i< size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    int sum = 0;
    for (int i=0 ; i< size ; i++)
    { 
       sum=sum+arr[i];
      
      average= sum / size;
        
    }
    printf("sum is %d\n",sum);
    printf("average is %f\n",average);
 
}