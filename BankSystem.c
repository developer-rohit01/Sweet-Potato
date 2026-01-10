





#include <stdio.h>
#include <stdlib.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

void createAccount();
void depositMoney();
void withdrawMoney();
void checkBalance();
void displayAll();

int main() {
    int choice;

    do {
        printf("\n--- Simple Banking System ---\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: createAccount(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: checkBalance(); break;
            case 5: displayAll(); break;
            case 6: exit(0);
            default: printf("Invalid choice!\n");
        }
    } while(1);

    return 0;
}



void createAccount() {
    FILE *fp;
    struct Account acc;

    fp = fopen("bank.dat", "ab");
    if (fp == NULL) {
        printf("File error\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &acc.accNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", acc.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc.balance);

    fwrite(&acc, sizeof(acc), 1, fp);
    fclose(fp);

    printf("Account created successfully!\n");
}



void displayAll() {
    FILE *fp;
    struct Account acc;

    fp = fopen("bank.dat", "rb");
    if (fp == NULL) {
        printf("No records found\n");
        return;
    }

    printf("\nAcc No\tName\t\tBalance\n");

    while (fread(&acc, sizeof(acc), 1, fp)) {
        printf("%d\t%s\t\t%.2f\n",
               acc.accNo, acc.name, acc.balance);
    }

    fclose(fp);
}


void depositMoney() {
    FILE *fp;
    struct Account acc;
    int accNo, found = 0;
    float amount;

    fp = fopen("bank.dat", "rb+");
    if (fp == NULL) {
        printf("File not found\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.accNo == accNo) {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Invalid amount\n");
                fclose(fp);
                return;
            }

            acc.balance += amount;

            fseek(fp, -sizeof(acc), SEEK_CUR);
            fwrite(&acc, sizeof(acc), 1, fp);

            printf("Amount deposited successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account not found!\n");
    }

    fclose(fp);
}


void withdrawMoney() {
    FILE *fp;
    struct Account acc;
    int accNo, found = 0;
    float amount;

    fp = fopen("bank.dat", "rb+");
    if (fp == NULL) {
        printf("File not found\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.accNo == accNo) {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("Invalid amount\n");
                fclose(fp);
                return;
            }

            if (amount > acc.balance) {
                printf("Insufficient balance!\n");
                fclose(fp);
                return;
            }

            acc.balance -= amount;

            fseek(fp, -sizeof(acc), SEEK_CUR);
            fwrite(&acc, sizeof(acc), 1, fp);

            printf("Withdrawal successful!\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account not found!\n");
    }

    fclose(fp);
}



void checkBalance() {
    FILE *fp;
    struct Account acc;
    int accNo, found = 0;

    fp = fopen("bank.dat", "rb");
    if (fp == NULL) {
        printf("No records found\n");
        return;
    }

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.accNo == accNo) {
            printf("\nAccount Holder: %s", acc.name);
            printf("\nCurrent Balance: %.2f\n", acc.balance);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Account not found!\n");
    }

    fclose(fp);
}
