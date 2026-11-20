#include<stdio.h>

int simple_intrest(int principle,int rate,int time);

int main(){
    int principle,rate,time;

    scanf("%d %d %d",&principle ,&rate ,&time );

     int store = simple_intrest(principle,rate,time);

     printf("simple intrest is %d",store);


}
    int simple_intrest(int principle,int rate,int time)
    {
        int intrest=(principle*rate*time)/100;
        return intrest;
    }