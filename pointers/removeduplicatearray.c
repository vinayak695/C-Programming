#include<stdio.h>

int duplicate(int *ptr1,int size,int *ptr2);

int main(){
    int size;
    printf("Enterthe size");
    scanf("%d",&size);

    int arr[size];
    int unique[size];

    printf("enter the elements:\n");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }

  int count =  duplicate(arr,size,unique);

  printf("Unique arrays are:\n");

  for(int i=0; i<count; i++)
  {
    printf("%d",unique[i]);
  }


}

     int duplicate(int *ptr1,int size,int *ptr2)
     {
            ptr2[0]=ptr1[0];
            int count=1;

           for(int i=1; i<size; i++)
        {
            int flag=0;

           for(int j=0; j<count; j++)
           {
                if(ptr1[i]==ptr2[j])
            {
                flag=1;
                break;
           } 
        }
           if (flag==0)
           {
            ptr2[count]=ptr1[i];
            count++;
        }     
     }return count;
    }
