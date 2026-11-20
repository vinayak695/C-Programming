
#include <stdio.h>
#include <stdlib.h>

int* findPeaks(int* mountain, int mountainSize, int* returnSize)
{
    int *res = (int*)malloc(mountainSize * sizeof(int));

    if(res == NULL)
    {
        *returnSize = 0;
        return NULL;
    }

    int count = 0;

    for(int i = 1; i < mountainSize-1; i++)
    {
        if(mountain[i-1] < mountain[i] &&
           mountain[i+1] < mountain[i])
        {
            res[count] = i;
            count++;
        }
    }

    *returnSize = count;

    if(count == 0)
    {
        free(res);
        return NULL;
    }

    return res;
}

int main()
{
    int mountainSize;

    printf("Enter array size: ");
    scanf("%d", &mountainSize);

    if(mountainSize <= 0)
    {
        return 0;
    }

    int mountain[mountainSize];

    printf("Enter array elements: ");

    for(int i = 0; i < mountainSize; i++)
    {
        scanf("%d", &mountain[i]);
    }

    int returnSize = 0;

    int *res = findPeaks(mountain, mountainSize, &returnSize);

    if(returnSize == 0)
    {
        printf("No peak elements found\n");
    }
    else
    {
        printf("Peak indices: ");

        for(int i = 0; i < returnSize; i++)
        {
            printf("%d ", res[i]);
        }

        printf("\n");
    }

    free(res);

    return 0;
}
