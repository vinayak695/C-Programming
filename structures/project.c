#include <stdio.h>

struct student
{
    int id;
    char name[50];
    char address[100];
    long long mobile;
};

int main()
{
    struct student s[100];
    int choice;
    int count = 0;
    int i;

    while (1)
    {
        printf("\n::: WELCOME TO STUDENT DATABASE :::\n");
        printf("1. Add details\n");
        printf("2. Search details\n");
        printf("3. List details\n");
        printf("4. Exit\n");

        printf("Enter the option: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:

                printf("Enter the id: ");
                scanf("%d", &s[count].id);

                printf("Enter the name: ");
                scanf("%s", s[count].name);

                printf("Enter the address: ");
                scanf("%s", s[count].address);

                printf("Enter the mobile number: ");
                scanf("%lld", &s[count].mobile);

                count++;
                break;

            case 2:

                printf("Search detail");
                break;

            case 3:

                if (count == 0)
                {
                    printf("No records available\n");
                }
                else
                {
                    printf("\nStudent Details\n");

                    for (i = 0; i < count; i++)
                    {
                        printf("\nID      : %d\n", s[i].id);
                        printf("Name    : %s\n", s[i].name);
                        printf("Address : %s\n", s[i].address);
                        printf("Mobile  : %lld\n", s[i].mobile);
                    }
                }
                break;

            case 4:

                printf("Exit\n");
                return 0;

            default:

                printf("Invalid Choice\n");
        }
    }

    return 0;
}