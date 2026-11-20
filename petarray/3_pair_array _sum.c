#include<stdio.h>
int main()
{
    int size,n;

    printf("Enter the size: ");
    scanf("%d",&size);

    printf("Enter the n vale: ");
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
                if(arr[i] + arr[j]+ arr[j+1] == n)
            {
                printf("%d + %d + %d = %d\n",arr[i],arr[j],arr[j+1],n);
                found = 1;
            }

        }
    }
    if (found == 0)
    {
        printf("not found");
    }

}   