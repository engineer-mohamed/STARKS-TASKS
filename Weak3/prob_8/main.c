#include <stdio.h>

float smallest_of_three(float a, float b, float c);


int main() {
    float num1 , num2 , num3 ;
    printf("Enter 3 float values : ");
    scanf("%f %f %f",&num1,&num2,&num3);
    float result = smallest_of_three(num1, num2, num3);
    printf("The smallest number is: %.2f\n", result);
    return 0;
}

float smallest_of_three(float a, float b, float c) {
    if (a <= b && a <= c)
        return a;
    else if (b <= a && b <= c)
        return b;
    else
        return c;
}
