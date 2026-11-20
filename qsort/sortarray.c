#include <stdio.h>
#include <stdlib.h>

int sort(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    return x - y;
}

int main()
{
    int size, i;

    scanf("%d", &size);

    int arr[size];

    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    qsort(arr, size, sizeof(int), sort);

    printf("After sorting ");

    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}