// #include<stdio.h>

// char*mystrcpy(char *dest, const char *src)
// {
// int i=0;
// while (src[i]!='\0')
// {
//     dest[i]=src[i];
//     i++;
// }
// dest[i]='\0';

// return dest;

// }


// int main()
// {
//     char str1[20]="hello";
//     char str2[30];

//     char *ptr =mystrcpy(str2,str1);
//     printf("str2= %s\n",str2);
    
// }


// we can also write 

#include<stdio.h>

void mystrcpy(char *dest, const char *src)
{
int i=0;
while (src[i]!='\0')
{
    dest[i]=src[i];
    i++;
}
dest[i]='\0';

}


int main()
{
    char str1[20]="hello";
    char str2[30];

    mystrcpy(str2,str1);

    printf("str2= %s\n",str2);
    
}