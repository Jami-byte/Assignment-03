#include <stdio.h>

int main() {
    float income, tax = 0;

    printf("Enter your income: ");
    scanf("%f", &income);

    if (income <= 250000) {
        tax = 0;
     
        if (income <= 500000) {
            tax = (income - 250000) * 0.05;
    } 
          else if (income <= 1000000) {
                tax = (250000 * 0.05) + (income - 500000) * 0.10;
    } 
            else {
                  tax = (250000 * 0.05) + (500000 * 0.10) + (income - 1000000) * 0.15;
    }

    printf("The income tax to be paid is: %.2f\n", tax);

    return 0;
}
}
