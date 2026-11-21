#include<stdio.h>
int main(){
 int size ,i;

printf("enter the size of an array");
scanf(" %d",&size);
int stor[size];
 
printf("enter the array element");
 for(i=0; i<size; i++)
 {
    scanf("%d",&stor[i]);
 }   
 
for(i=0; i<size;i++)
{
    if (stor[i]%2==0)
    {
        printf(" %d",stor[i]);
    }
}    
} 