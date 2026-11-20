#include<stdio.h>
int even_odd(int num);

int main(){
    int num;
    printf("enter the number: ");
    scanf("%d",&num);

   int store= even_odd(num);
   if(store==1){
    printf("It is even");
   }
   else
   {
    printf("It is odd");
   }
}
    int even_odd(int num)
   {
    if (num%2==0)
        return 1;
    else
        return 0;

}

