#include <stdio.h>

int isPerfect(int num);

int main() {
    printf("Perfect numbers between 1 and 100 are:\n");

    for (int i = 1; i <= 100; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}


int isPerfect(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum == num;
}
