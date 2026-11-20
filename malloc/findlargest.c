#include<stdio.h>
#include<stdlib.h>

int main()
{

    int size;
    printf("enter the size: ");
    scanf("%d", &size);

    int *ptr;
    ptr = malloc (size* sizeof(int));

    if(ptr == NULL)
    {
        printf("memory is not allocated");
        return 0;
    }

    for(int i=0; i<size; i++)
    {
        scanf("%d",&ptr[i]);
    }

     int largest = ptr[0];

    for(int i=1; i<size; i++)
    {
        if(largest < ptr[i]);
        largest = ptr[i];
    }    
    printf("Largest is %d",largest);
}