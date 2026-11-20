#include<stdio.h>
#include<string.h>
int main()
{

// char str[]="hello";
// printf("%d",sizeof(str));        // include null character

char str[]="hello";
int store=strlen(str);
printf("%d",store);        //exclude null character
}