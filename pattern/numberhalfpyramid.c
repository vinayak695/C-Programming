#include<stdio.h>
int main(){

    int n;

    printf("enter the number:");
    scanf("%d",&n);

   int nst=1;
   int a=1;

    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=n-i; j++){
            printf("  ");
        } 
        
        for(int k=1; k<=nst; k++){          //%d → print an integer
           printf("%-2d",a);                // 2 → give it 2 character positions
           a++;                             // - → put the number on the left side                       
           
        }
        nst=nst+2;
        printf("\n");
    }

}