#include <stdio.h>

void decimal_To_Binary(int num);

int main() {
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    decimal_To_Binary(decimal);

    return 0;
}

void decimal_To_Binary(int num) {
    int binary[32];
    int index = 0;

    if (num == 0) {
        printf("Binary: 0\n");
        return;
    }

    while (num > 0) {
        binary[index++] = num % 2;
        num /= 2;
    }

    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
}
