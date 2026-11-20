#include<stdio.h.>
int main(){

    int a=10,b=9;
    int*p,*q;

    p=&a;
    q=&b;

printf("a=%d\n",a);                    //value of a
printf("a=%d\n",*p);                   //value of a
printf("a=%p\n",p);                    //address of a 
printf("a=%d\n",b);                    // value of b
printf("a=%d\n",*q);                   // value of b
printf("a=%p\n",q);                    // address of b
printf("addres of p:%p\n",&p);        //address of p
printf("addres of q:%p\n",&q);        //address of p

}