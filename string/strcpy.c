//  To copy data from one string to another string


#include<stdio.h>
#include<string.h>
int main()
{
    char src[20]="hellow world";
    char dest[20];

    strcpy(dest,src);
    printf("destination are : %s",dest);
}

#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    
    scanf("%[^\n]",str);
    
    char dup[20];
    
    strcpy(dup,str);
    
    int flag=1;
    int i;
    int j= strlen(dup)-1;
    for(i=0;i<j;i++ j--)
    {
    if(str[i]!= dup[j])
    {
        flag=0;
        break;
    }
    
    if(flag==1)
    {
        printf("it is palandrome");
    }
    else
    {
        printf("it is not an palandrome");
    }
    
    
}
}