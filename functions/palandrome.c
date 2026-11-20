#include<stdio.h>

int palandrome(int num);

int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int res = palandrome(num);
    if (res)
    {
        printf("It is palandrome");
    }
    else
    {
        printf("Not a palandrome");
    }

}
    int palandrome(int num)
    {
        int num1=num;
        
        int rev=0;
        while(num>0)
        {
            int digit=num % 10;
            rev = (rev *10) + digit;
            num=num/10;
        }
        if (num1==rev)
        {
            return 1;

        }
        else{
            return 0;
        }
    }