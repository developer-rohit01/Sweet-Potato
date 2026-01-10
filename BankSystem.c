





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
void deleteAccount();


int main() {
    int choice;

    do {

        printf("\n================================= Bank Management System === DEVLOPER---> ROHIT ==========================\n\n");
        printf("\t1.Create Account\t\t2.Deposit Money\t\t\t3.Withdraw Money\n\n\t4.Check Balance\t");
        printf("\t\t5.Display All Account\t\t6.Delete Account\n\n\t\t\t\t\t   7.Exit\n");
        printf("=========================================================================================================\n\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        getchar();


        switch(choice) {
            case 1: createAccount(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: checkBalance(); break;
            case 5: displayAll(); break;
            case 6: deleteAccount(); break; 
            case 7: exit(0);
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


void deleteAccount() {
    FILE *fp, *temp;
    struct Account acc;
    int accNo, found = 0;

    fp = fopen("bank.dat", "rb");
    if (fp == NULL) {
        printf("No records found\n");
        return;
    }

    temp = fopen("temp.dat", "wb");
    if (temp == NULL) {
        fclose(fp);
        printf("File error\n");
        return;
    }

    printf("Enter Account Number to delete: ");
    scanf("%d", &accNo);

    while (fread(&acc, sizeof(acc), 1, fp)) {
        if (acc.accNo == accNo) {
            found = 1;   // skip writing this record
        } else {
            fwrite(&acc, sizeof(acc), 1, temp);
        }
    }

    fclose(fp);
    fclose(temp);

    if (found) {
        remove("bank.dat");
        rename("temp.dat", "bank.dat");
        printf("Account deleted successfully!\n");
    } else {
        remove("temp.dat");
        printf("Account not found!\n");
    }
}
