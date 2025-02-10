#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], ch;
    int count = 0;
    printf("Input the string : ");
    fgets(str, sizeof(str), stdin);
    printf("Input the character to find frequency: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }
    printf("The frequency of '%c' is : %d\n", ch, count);

    return 0;
}
