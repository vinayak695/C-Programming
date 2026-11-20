// #include<stdio.h>
 
// #define swap(n1,n2)\
// int temp=n1;\
//        n1=n2;\
//        n2=temp;

// int main()
// {
//     int n1=2 ,n2=3;
//    swap(n1,n2);
//     printf("n1---->%d  n2---->%d",n1,n2);
// }


#include<stdio.h>
 
#define swap(n1,n2,t)\
{t temp=n1;\
       n1=n2;\
       n2=temp;}

int main()
{
    int n1=2 ,n2=3;
   swap(n1,n2,int);
    printf("n1---->%d  n2---->%d\n",n1,n2);

    
    char  ch1='v' ,ch2='s';
   swap(ch1,ch2,char);
    printf("ch1---->%c  ch2---->%c\n",ch1,ch2);



    float f1=2.5 ,f2=3.5;
   swap(f1,f2, float);
    printf("f1---->%f  f2---->%f",f1,f2);

}

