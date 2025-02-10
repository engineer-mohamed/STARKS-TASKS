#include <stdio.h>

int main() {

int arr[5][5];

int i, j;

for (i = 0; i < 5; i++) {

printf("Enter row %d: ", i+1);

for (j = 0; j < 5; j++) {

scanf("%d", &arr[i][j]);

}

}

int row_sums[5] = {0};

for (i = 0; i < 5; i++) {

for (j = 0; j < 5; j++) {

row_sums[i] += arr[i][j];

}

}

int col_sums[5] = {0};

for (j = 0; j < 5; j++) {

for (i = 0; i < 5; i++) {

col_sums[j] += arr[i][j];

}

}

// Print row sums

printf("Row totals:    ");

for (i = 0; i < 5; i++) {

printf("%d ", row_sums[i]);

}

printf("\n");

printf("Column totals: ");

for (j = 0; j < 5; j++) {

printf("%d ", col_sums[j]);

}

printf("\n");

return 0;

}
