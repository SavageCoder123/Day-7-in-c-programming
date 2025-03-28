#include <stdio.h>

int main() {
    int arr[100], n, num = 21, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Linear search
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            printf("Element searched and found\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}
