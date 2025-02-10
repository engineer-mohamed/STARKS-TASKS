#include <stdio.h>

#include <string.h>

int main() {

char num[20]; 

int counts[10] = {0};

int i, flag = 0;

scanf("%s", num);

for (i = 0; num[i] != '\0'; i++) {

int digit = num[i] - '0';

counts[digit]++;

if (counts[digit] > 1) {

flag = 1;

break;

}

}

if (flag) {

printf("Yes\n");

} else {

printf("No\n");

}

return 0;

}
