#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the array :\n");
    scanf("%d",&size);
    int stor[size];

    printf("enter the element:\n");
    for ( int i=0; i<size;i++)
    {
    scanf("%d",&stor[i]);
    } 
    printf(" array elements are :\n" );   
    for ( int i=0; i<size; i++)
    {
       printf(" %d",stor[i]);    
    }  
}   
 
