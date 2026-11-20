#include<stdio.h>
int main(){
    int n,m;
    printf("enter the number:");
    scanf("%d %d",&n ,&m);

    for(int i=1; i<=n; i++){
        for (int j=1; j<=m; j++) {

        if(i==1|| j==6 ||  i==4 || j==1)
        printf("*");
        else
        printf(" ");
        
    }
    printf("\n");
} 
}