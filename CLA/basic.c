#include<stdio.h>

int main(int argc, char* argv[]) // ./a.out hello hai

{

printf("argument count-> %d\n", argc);

for(int i = 0; i < argc; i++)

{

printf("%s\n", argv[i]);

}

printf("-------------\n");


// both will work same 

// int i = 0;

// while(argv[i] != NULL)

// {

//     printf("%s\n", argv[i]);

//     i++;

// }

}