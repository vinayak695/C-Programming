#include<stdio.h>
#include<stdlib.h>
int main ()
{

    int size;
    printf("enter the size:");
    scanf("%d",&size);

    int *ptr = calloc(size,sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory is not allocated");
        return 0;
    }

    for(int i=0; i<size; i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(int i=0; i<size; i++)
    {
        printf("%d",ptr[i]);
    }

    printf("-----------------------------------------\n");

    int new_size;
    printf("Enter the new size: ");
    scanf("%d",&new_size);

    int *temp = realloc( ptr, (size + new_size) * sizeof(int));

        if(temp == NULL)
    {
        printf("Memory reallocation failed");
        free(ptr);
        return 0;
    }
    ptr = temp;


    for(int i=size; i < size + new_size; i++)
    {
        scanf("%d",&ptr[i]);
    }

    for(int i=0;  i < size + new_size;  i++)
    {
        printf("%d ",ptr[i]);
    }
    
    free(ptr);
    ptr = NULL;
}