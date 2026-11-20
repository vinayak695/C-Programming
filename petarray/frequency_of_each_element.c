#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements: ");

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int count, flag;

    for(int i = 0; i < size; i++)
    {
        count = 0;
        flag = 0;

                                        // Check previous elements
        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
                                            // Count frequency
            for(int j = 0; j < size; j++)
            {
                if(arr[i] == arr[j])
                {
                    count++;
                }
            }

            printf("%d occurs -> %d times\n", arr[i], count);
        }
    }

    return 0;
}