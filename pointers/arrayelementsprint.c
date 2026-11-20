#include <stdio.h>

 void print_elements(int *ptr , int size);

int main(){
    int size=5;
    
    int arr[5]={ 10,20,30,40,50};
    
    print_elements(arr,size);
    
    return 0;
    
    
}
  void print_elements(int *ptr ,int size)
    {
    
        printf("Array's elements are\n");
        
        for(int i=0; i<size; i++)
        {
            printf("%d\n",ptr[i]);
        }
    }