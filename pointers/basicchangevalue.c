#include<stdio.h>
int main(){

    int var=10;
    int*cptr=&var;
    *cptr=20;

    printf("%p\n",cptr);
    printf("%d\n",*cptr);
}