#include<stdio.h>

 int uniquearrayprint(int *arr, int size ,int *arr1, int *arr2);

int main(){
    int size=5;

    int arr[size];
    int arr1[size];
    int arr2[size];

    printf("enter the first array elements:");
    for(int i=0; i<size; i++)
    {
    scanf("%d",&arr[i]);
    }

    printf("enter the second array elements:");
    for(int i=0; i<size; i++)
    {
    scanf("%d",&arr1[i]);
    }

  int stor=  uniquearrayprint(arr,size, arr1, arr2);

    printf("unique elements are:");
    for(int i=0; i<stor; i++)
    {
    printf("%d",arr2[i]);
    }
}

   int uniquearrayprint(int*ptr, int size, int *ptr1, int *ptr2)
    {    

    int flag=0;
    int count=0;

    for(int i=0; i<size; i++)
    {
        flag =  0;

        for(int j=0; j<size; j++)
        {
            if (ptr[i]==ptr1[j])
            {
               flag=1;
               break;
            }
        }

        if (flag ==0)
        
        {
           ptr2[count]=ptr[i];
           count++;
          
        } 
        
    }  return count;
     
}