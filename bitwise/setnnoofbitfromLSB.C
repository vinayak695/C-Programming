#include<stdio.h>
int main ()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    printf("enter the position:");  
    int n ;
    scanf("%d",&n);

    int pos =5;
     int res = num|((1<<n)-1)<<pos -n+1;

     printf("updated number is :%d",res);
}



// #include<stdio.h>
// int main()
// {
//     int num ,n;
//    printf("enter the number");
//    scanf("%d",&num);

//    printf("enter the no  to set: ");
//    scanf("%d",&n);

//    int result= num|((1<<n)-1);

//    printf("%d",result);
// } 