#include <stdio.h>

struct account
{
    int acc_no;
    char name[20];
    float balance;
};

int main()
{
    struct account a;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &a.acc_no);

    getchar();

    printf("Enter Name: ");
    scanf("%[^\n]", a.name);

    printf("Enter Balance: ");
    scanf("%f", &a.balance);

    printf("\n1. Deposit");
    printf("\n2. Withdraw");
    printf("\n3. Check Balance");

    printf("\nEnter Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            a.balance = a.balance + amount;

            printf("Updated Balance = %.2f", a.balance);
            break;

        case 2:
            printf("Enter Withdraw Amount: ");
            scanf("%f", &amount);

            if(amount <= a.balance)
            {
                a.balance = a.balance - amount;
                printf("Updated Balance = %.2f", a.balance);
            }
            else
            {
                printf("Insufficient Balance");
            }
            break;

        case 3:
            printf("Current Balance = %.2f", a.balance);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}