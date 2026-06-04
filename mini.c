#include <stdio.h>

int main() {
    int choice = 0, accountNumber;
    float balance = 0.0, amount;

    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    while (choice != 4) {
        printf("\n1. Deposit\n2. Withdraw\n3. Balance\n4. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Amount: ");
                scanf("%f", &amount);
                balance += amount;
                break;

            case 2:
                printf("Amount: ");
                scanf("%f", &amount);

                if (amount <= balance)
                    balance -= amount;
                else
                    printf("Insufficient balance!\n");
                break;

            case 3:
                printf("Account Number: %d\n", accountNumber);
                printf("Balance: Rs. %.2f\n", balance);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}