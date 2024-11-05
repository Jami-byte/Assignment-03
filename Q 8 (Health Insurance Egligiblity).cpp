#include<stdio.h>
#include <stdio.h>

int main() {
    int age;
    char serious_illness;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 18) {
    	
        if (age > 45) {
            printf("Do you have any serious illness? (Y/N): ");
            scanf(" %c", &serious_illness);

            if (serious_illness == 'Y' || serious_illness == 'y') {
                printf("Not eligible for health insurance due to serious illness.\n");
            } else {
                printf("Eligible for health insurance.\n");
            }
        } else {
            printf("Eligible for health insurance.\n");
        }
    } else {
        printf("Not eligible for health insurance. Must be above 18.\n");
    }

    return 0;
}

