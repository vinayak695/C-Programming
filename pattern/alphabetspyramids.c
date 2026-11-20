#include<stdio.h>
int main(){

    int n;

    printf("enter the number:");
    scanf("%d",&n);

   int nst=1;
   int a=1;

    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n-i; j++){
            printf(" ");
        } 
        
        for(int k=1; k<=nst; k++){
            char ch= (char)a+64;
            printf("%c",ch);
            a++;
        }

        nst=nst+2;
        printf("\n");
    }


}