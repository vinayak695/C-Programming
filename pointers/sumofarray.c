#include<stdio.h>
void pass_the_array(int *ptr,int size);
int main(){
    int size;

    scanf("%d",&size);

    int arr[size];

    for(int i=0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    pass_the_array(arr,size); 
       
    }
    void pass_the_array(int *ptr,int size)
    {
        int sum=0;
        for(int i=0; i<size; i++){
            sum=sum+ptr[i];
        }printf("%d",sum);
    }  