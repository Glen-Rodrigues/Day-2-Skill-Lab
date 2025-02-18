#include <stdio.h>
void Transaction (int choice, int balance)
{
    int amount;
    switch (choice)
    {
        case 1:
            printf ("Enter Amount:");
            scanf ("%d", amount);
            if (amount > balance)
                printf ("Insufficient Balance");
            else 
            {
                balance -= amount;
                printf ("Transaction Successful. Remaining Balance: ₹%d", balance);
            }
            break;
        case 2:
            printf ("Enter Amount:");
            scanf ("%d", amount);
            balance += amount;
            printf ("Transaction Successful. Remaining Balance: ₹%d", balance);
            break;
        case 3:
            printf ("Remaining Balance: ₹%d", balance);
            break;
        default:
            printf ("(Invalid Choice");
    }
}
int main()
{
    int choice, balance = 50000;
    printf ("Enter your choice: \n 1. Withdraw \n 2. Deposit \n 3. Check Balance \n Choice:");
    scanf ("%d", &choice);
    Transaction (choice, balance);
    return 0;
}
