#include<stdio.h>
int main(){
    int num=12345678;
    char *cptr=(char *)&num;
    printf("%d",*cptr);
    if (*cptr==78)
    {
        printf("little endian");

    }else
    {
        printf("big endian");
    }
}  