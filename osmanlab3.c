#include <stdio.h>

int main() {
    int pin, correct_pin = 1234;
    float balance = 10000.0;        
    float amount;
    printf("Enter your 4-digit PIN: ");
    scanf("%d", &pin);
    if (pin == correct_pin) {
        printf("Enter withdrawal amount: ");
        scanf("%f", &amount);
        if (amount > balance) {
            printf("Insufficient Balance.\n");
        } else {
            balance -= amount;
            printf("Transaction successful.\n");
            printf("Remaining balance: %.2f\n", balance);
        }
    } else {
        printf("Incorrect PIN. Access denied.\n");
    }

    return 0;
}
