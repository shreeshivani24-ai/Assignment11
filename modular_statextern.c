#include <stdio.h>

static float balance = 1000.0;

extern void deposit(float amount);
extern void withdraw(float amount);
extern float getBalance(void);

void deposit(float amount)
{
    balance += amount;
    printf("Amount deposited: %.2f\n", amount);
}

void withdraw(float amount)
{
    if (amount <= balance)
    {
        balance -= amount;
        printf("Amount withdrawn: %.2f\n", amount);
    }
    else
    {
        printf("Insufficient balance\n");
    }
}

float getBalance(void)
{
    return balance;
}

int main()
{
    printf("Initial balance: %.2f\n", getBalance());

    deposit(500.0);
    printf("Balance after deposit: %.2f\n", getBalance());

    withdraw(200.0);
    printf("Balance after withdrawal: %.2f\n", getBalance());

    return 0;
}