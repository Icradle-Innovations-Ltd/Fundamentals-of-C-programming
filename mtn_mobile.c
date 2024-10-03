#include <stdio.h>

// Function declarations
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);
void transactionHistory(float transactions[], int count);

int main() {
    float balance = 1000.0; // Starting balance
    float transactions[100]; // Array to store transaction history
    int transactionCount = 0; // Count of transactions
    int option;
    
    do {
        // Display the menu
        printf("\n=== MTN Mobile Money ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Transaction History\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        
        switch(option) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                transactions[transactionCount++] = balance; // Log transaction
                break;
            case 3:
                balance = withdraw(balance);
                transactions[transactionCount++] = balance; // Log transaction
                break;
            case 4:
                transactionHistory(transactions, transactionCount);
                break;
            case 5:
                printf("Thank you for using MTN Mobile Money!\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while(option != 5);
    
    return 0;
}

// Function to check balance
void checkBalance(float balance) {
    printf("Your current balance is: %.2f UGX\n", balance);
}

// Function to deposit money
float deposit(float balance) {
    float depositAmount;
    printf("Enter amount to deposit: ");
    scanf("%f", &depositAmount);
    balance += depositAmount;
    printf("%.2f UGX has been deposited to your account.\n", depositAmount);
    return balance;
}

// Function to withdraw money
float withdraw(float balance) {
    float withdrawAmount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &withdrawAmount);
    
    if(withdrawAmount > balance) {
        printf("Insufficient balance!\n");
    } else {
        balance -= withdrawAmount;
        printf("%.2f UGX has been withdrawn from your account.\n", withdrawAmount);
    }
    return balance;
}

// Function to display transaction history
void transactionHistory(float transactions[], int count) {
    printf("\nTransaction History:\n");
    for(int i = 0; i < count; i++) {
        printf("Transaction %d: Balance after transaction: %.2f UGX\n", i + 1, transactions[i]);
    }
}
