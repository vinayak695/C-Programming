/* 
   Write a C program to dynamically allocate memory for one integer 
   using malloc(), take a number from the user,
   and print that number. 
   
 */


#include<stdio.h>
#include<stdlib.h>

int main ()
{
    // int size;
    // printf("Enter the size: ");
    // scanf("%d",&size);

    int *ptr;
    ptr = malloc (sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory is not allocated");
        return 0;
    }

    int num;
    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Number is: %d",num);

    free(ptr);

}