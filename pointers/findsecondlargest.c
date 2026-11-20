#include<stdio.h>

void findsecond(int *ptr, int size,  int *largest, int *secondlargest);

int main(){
    int size,largest,secondlargest;
    scanf("%d",&size);

    int arr[size];
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

    findsecond(arr,size,&largest,&secondlargest);

    printf("largest is %d",largest);
    printf("\n Second largest is %d",secondlargest);
}

    void findsecond(int *ptr, int size,  int *largest, int *secondlargest)

    {
        *largest=ptr[0];
        for (int i=1; i<size; i++)
        {
            if (*largest<ptr[i])
            {
                *largest=ptr[i];
            }
        }

        *secondlargest=ptr[0];
        for (int i=1; i<size; i++)
        {
            if (ptr[i]!=*largest && ptr[i] > *secondlargest)
            {
                *secondlargest=ptr[i];
            }
        }

    }