#include <stdio.h>

int main() {
    float mark1, mark2, mark3, average;

    printf("Enter marks for three subjects: ");
    scanf("%f %f %f", &mark1, &mark2, &mark3);

    average = (mark1 + mark2 + mark3) / 3;

    printf("Average marks: %.2f\n", average);

    if (average < 50) {
        printf("Result: Fail\n");
     
	    if (average > 75) {
            printf("Result: A\n");
    }
    
	} else {
        printf("Result: B\n");
    }

    return 0;
}

