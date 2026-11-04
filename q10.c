#include <stdio.h>

static float balance = 5000.0;

void deposit(float amount)
{
    balance = balance + amount;
    printf("Amount deposited: %.2f\n", amount);
}

void withdraw(float amount)
{
    if (amount <= balance)
    {
        balance = balance - amount;
        printf("Amount withdrawn: %.2f\n", amount);
    }
    else
    {
        printf("Insufficient balance!\n");
    }
}

float getBalance()
{
    return balance;
}
#include <stdio.h>

void deposit(float amount);
void withdraw(float amount);
float getBalance();

int main()
{
    printf("Initial Balance: %.2f\n", getBalance());

    deposit(2000);
    printf("Current Balance: %.2f\n", getBalance());

    withdraw(1500);
    printf("Current Balance: %.2f\n", getBalance());

    withdraw(7000);

    printf("Final Balance: %.2f\n", getBalance());

    return 0;
}