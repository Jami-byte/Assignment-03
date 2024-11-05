#include <stdio.h>

int main() {
    int monthlyIncome;
    char hasExistingLoan;
    char overduePayments;
    
    printf("Enter monthly income: ");
    scanf("%d", &monthlyIncome);

    if (monthlyIncome > 30000) {
        
        printf("Do you have an existing loan? (Y/N): ");
        scanf(" %c", &hasExistingLoan);

        if (hasExistingLoan == 'Y' || hasExistingLoan == 'y') {
            
            printf("Do you have overdue payments? (Y/N): ");
            scanf(" %c", &overduePayments);

            if (overduePayments == 'N' || overduePayments == 'n') {
                printf("You are eligible for the loan.\n");
            } else {
                printf("You are not eligible for the loan due to overdue payments.\n");
            }
        } else {
            printf("You are eligible for the loan.\n");
        }
    } else {
        printf("You are not eligible for the loan due to insufficient income.\n");
    }

    return 0;
}

