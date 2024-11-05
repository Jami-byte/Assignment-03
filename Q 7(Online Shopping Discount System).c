#include <stdio.h>

int main() {
    float purchase_amount, final_amount;
    char membership;

    printf("Enter the purchase amount: ");
    scanf("%f", &purchase_amount);

    if (purchase_amount > 2000) {
        printf("Are you a member? (Y/N): ");
        scanf(" %c", &membership);

        if (membership == 'Y' || membership == 'y') {
            final_amount = purchase_amount * 0.80;
            printf("20%% discount applied.\n");
        } else {
            final_amount = purchase_amount * 0.90;
            printf("10%% discount applied.\n");
        }
    } else {
        final_amount = purchase_amount;
        printf("No discount applied.\n");
    }

     printf("Final amount after discount: %.2f\n", final_amount);

    return 0;
}



