#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main() {
    unsigned int n;

    printf("Enter the position of the Fibonacci number: ");
    scanf("%u", &n);

    unsigned long long int fibNumber = fibonacci(n);
    printf("The %uth Fibonacci number is: %llu\n", n, fibNumber);

    unsigned long long int prev = 0, curr = 1, next;
    unsigned int count = 1;

    while (1) {
        next = prev + curr;
        if (next < curr) {
            break;
        }
        prev = curr;
        curr = next;
        count++;
    }

    printf("The largest Fibonacci number that can be calculated is %llu at position %u.\n", prev, count);

    return 0;
}



unsigned long long int fibonacci(unsigned int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    unsigned long long int prev = 0, curr = 1, next;
    for (unsigned int i = 2; i <= n; ++i) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}
