#include <stdio.h>
#include <string.h>

// Function declarations
void setPIN(char pin[]);
int verifyPIN(char pin[]);
void checkBalance(float balance);
float deposit(float balance);
float withdraw(float balance);
float buyAirtime(float balance);
void transactionHistory(float transactions[], int count);

int main() {
    float balance = 1000.0; // Starting balance
    float transactions[100]; // Array to store transaction history
    int transactionCount = 0; // Count of transactions
    int option;
    char pin[5]; // 4-digit PIN + null terminator

    // Set PIN for the first time
    setPIN(pin);

    // Main menu loop
    do {
        // Verify the PIN before accessing services
        if (!verifyPIN(pin)) {
            printf("Incorrect PIN. Try again.\n");
            continue;
        }

        // Display the menu
        printf("\n=== MTN Mobile Money ===\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Buy Airtime\n");
        printf("5. Transaction History\n");
        printf("6. Exit\n");
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
                balance = buyAirtime(balance);
                transactions[transactionCount++] = balance; // Log transaction
                break;
            case 5:
                transactionHistory(transactions, transactionCount);
                break;
            case 6:
                printf("Thank you for using MTN Mobile Money!\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    } while(option != 6);

    return 0;
}

// Function to set a 4-digit PIN
void setPIN(char pin[]) {
    do {
        printf("Set your 4-digit PIN: ");
        scanf("%4s", pin);
    } while(strlen(pin) != 4);

    printf("PIN set successfully!\n");
}

// Function to verify the PIN
int verifyPIN(char pin[]) {
    char enteredPin[5];
    printf("Enter your 4-digit PIN to continue: ");
    scanf("%4s", enteredPin);

    if(strcmp(pin, enteredPin) == 0) {
        return 1; // PIN matches
    } else {
        return 0; // PIN does not match
    }
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

// Function to buy airtime
float buyAirtime(float balance) {
    float airtimeAmount;
    printf("Enter amount of airtime to buy: ");
    scanf("%f", &airtimeAmount);

    if(airtimeAmount > balance) {
        printf("Insufficient balance!\n");
    } else {
        balance -= airtimeAmount;
        printf("You have successfully purchased %.2f UGX of airtime.\n", airtimeAmount);
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
