// pointer to an array simple one 


#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int (*ptr)[5] = &arr;   // Pointer to the whole array

    printf("First element = %d\n", (*ptr)[0]);
    printf("Second element = %d\n", (*ptr)[1]);
    printf("Third element = %d\n", (*ptr)[2]);

    return 0;
}