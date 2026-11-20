#include<stdio.h>

int uppercase(char ch);

int main(){
    char ch;
    scanf("%C",&ch);
  int stor= uppercase(ch);
  if (stor==1){
    printf("it is upper case");
  }
  else{
     printf("it is not and upper case");
  }
  
}
int uppercase(char ch)
{
    if (ch>='A'&& ch<='Z')
        return 1;
    else
        return 0 ;   
}
