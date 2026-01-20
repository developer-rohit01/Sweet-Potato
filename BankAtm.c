 #include<stdio.h>

struct BankAtm{
    char name[50];
    int acc_no;
    float balance;
};


int main(){
    struct BankAtm customer;
    
    printf("Enter Customer Name: ");
    scanf("%s", customer.name);
    
    printf("Enter Account Number: ");
    scanf("%d", &customer.acc_no);
    
    printf("Enter Initial Balance: ");
    scanf("%f", &customer.balance);
    
    printf("\n--- Customer Details ---\n");
    printf("Name: %s\n", customer.name);
    printf("Account Number: %d\n", customer.acc_no);
    printf("Balance: %.2f\n", customer.balance);

   return 0;
}