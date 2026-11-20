#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int n;
    printf("enter the n ");
    scanf("%d",&n);

    int *ptr = calloc(n, sizeof(int));
    if(ptr == NULL)
    {
        printf("memory is not allocated\n");
        return 0; 
    }
    printf("Enter the elements: ");

    for(int i=0 ; i<n ; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for(int i=0 ; i<n ; i++)
    {
        printf("%d", ptr[i]);
    }
        free(ptr);
}