#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int size;
    printf("enter the size: ");
    scanf("%d",&size);

    int sum=0;

    int *ptr = malloc(size * sizeof(int));
    if(ptr == NULL)
    {
        printf("memory is not allocated\n");
        return 0; 
    }

    printf("Enter the elements:");

    for(int i=0 ; i<size ; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for(int i=0 ; i<size ; i++)
    {
        sum=sum+ptr[i];
    }
    printf("%d",sum);

        free(ptr);
}