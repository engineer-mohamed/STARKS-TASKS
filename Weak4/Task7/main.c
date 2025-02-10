#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements in the array are:\n");
    for (i = 0; i < n; i++) {
        int isUnique = 1;

        for (j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}
