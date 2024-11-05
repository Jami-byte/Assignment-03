#include <stdio.h>

int main() {
    int age;
    float weight;

    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter weight in kg: ");
    scanf("%f", &weight);

    if (age >= 18 && age <= 65) {
        if (weight >= 50) {
            printf("The person is eligible to donate blood.\n");
        } else {
            printf("The person is not eligible to donate blood due to insufficient weight.\n");
        }
    } else {
        printf("The person is not eligible to donate blood due to age restrictions.\n");
    }

    return 0;
}


	
	
	
