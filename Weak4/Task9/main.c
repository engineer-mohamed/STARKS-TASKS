#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], ch;
    int i;
    printf("Input a string : ");
    fgets(str, sizeof(str), stdin);
    printf("Input replace character : ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; ++i) {
        if (str[i] == ' ') {
            str[i] = ch;
        }
    }
    printf("After replacing the space with %c\n%s", ch, str);

    return 0;
}
