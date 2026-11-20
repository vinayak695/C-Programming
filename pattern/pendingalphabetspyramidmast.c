#include<stdio.h>
int main(){

    int n;

    printf("enter the number:");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){

        for(int j=1; j<=n-i; j++){
            printf(" ");
        }
        int a=1;
        for(int k=1; k<=i; k++){
            char ch=(char)(a+64);
            printf("%c",ch);
            a++;
        }
        int l=i-1;
        for(int l=1; l<=i-1; l++){
            char ch=(char) (l+64);
            printf("%c",ch);
            l--;
        }
        printf("\n");
    }
}

