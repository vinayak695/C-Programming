
#include <stdio.h>
#include <string.h>

int main()
{
    int choice;
    char array[100];
    char ch;

    scanf("%d", &choice);

    if(choice == 1)
    {
        for(int i = 0; i < 8; i++)
        {
            scanf(" %c", &array[i]);
        }

        scanf(" %c", &ch);

        int i = 0;
        int j = 7;

        while(i <= 7)
        {
            int get = ((ch & (1 << j)) >> j);
            int clear = array[i] & (~1);
            array[i] = get | clear;

            i++;
            j--;
        }

        for(int i = 0; i < 8; i++)
        {
            printf("%c", array[i]);
        }
    }
    else if(choice == 2)
    {
        unsigned char decode = 0;

        for(int i = 0; i < 8; i++)
        {
            scanf("%c", &array[i]);
        }

        for(int i = 0; i < 8; i++)
        {
            decode = (decode << 1) | (array[i] & 1);
        }

        printf("%c", decode);
    }

    return 0;
}
