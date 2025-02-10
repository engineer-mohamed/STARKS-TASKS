#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    int maxPos = 0, minPos = 0;
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxPos = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            minPos = i;
        }
    }
    printf("The biggest number is %d at position %d.\n", max, maxPos + 1);
    printf("The smallest number is %d at position %d.\n", min, minPos + 1);

    return 0;
}
