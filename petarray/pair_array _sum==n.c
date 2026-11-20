#include<stdio.h>
int main()
{
    int size,n;

    printf("Enter the size: ");
    scanf("%d",&size);

    printf("Enter the n value: ");
    scanf("%d",&n);

    int arr[size];
    printf("Enter the elements: ");

    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    int found = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
                if(arr[i] + arr[j] == n)
            {
                printf("%d + %d = %d\n",arr[i],arr[j],n);
                found = 1;
            }

        }
    }

    if (found == 0)
    {
        printf("not found");
    }

}    

// leetcode

// int* twoSum(int* nums, int numsSize, int target, int* returnSize)
// {
//     for(int i = 0; i < numsSize; i++)
//     {
//         for(int j = i + 1; j < numsSize; j++)
//         {
//             if(nums[i] + nums[j] == target)
//             {
//                 int *result = (int *)malloc(2 * sizeof(int));

//                 result[0] = i;
//                 result[1] = j;

//                 *returnSize = 2;

//                 return result;
//             }
//         }
//     }

//     *returnSize = 0;
//     return NULL;
// }