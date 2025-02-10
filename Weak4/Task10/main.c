#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int i = 0, isEqual = 1;
    printf("Input the 1st string : ");
    fgets(str1, sizeof(str1), stdin);
    printf("Input the 2nd string : ");
    fgets(str2, sizeof(str2), stdin);
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            isEqual = 0;
            break;
        }
        i++;
    }

    printf("String1: %s", str1);
    printf("String2: %s", str2);

    if (isEqual) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    return 0;
}
