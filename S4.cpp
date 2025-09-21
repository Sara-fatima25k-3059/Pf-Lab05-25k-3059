#include <stdio.h>

int main() {
    int amount;
    int limit = 500;

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (amount <= limit) {
        if (amount > 0) {
            printf("Withdrawal approved.\n");
        } else {
            printf("Withdrawal denied. Amount must be a multiple of $20.\n");
        }
    } else {
        printf("Withdrawal denied. Amount exceeds limit.\n");
    }

    return 0;
}
