#include <stdio.h>
#include "lab1.h"
#include "main.h"

void displayResults() {
    float num1 , num2 ;
    int calac_times;
    printf("Enter time calcas : ");
    scanf("%i",&calac_times);
    for (int i = 0; i < calac_times; i++) {
            printf("Enter the 2 numbers : ");
            scanf("%f %f",&num1,&num2);
        printf("Average of %.2f and %.2f: %.2f\n", num1, num2, calculateAverage(num1, num2));
    }
    printf("Function called %d times\n", getCallCount());
}

int main() {
    displayResults();
    return 0;
}
