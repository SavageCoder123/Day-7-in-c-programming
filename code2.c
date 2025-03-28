#include <stdio.h>

int main() {
    int arr1[2][2], arr2[2][2], arr3[2][2];
    
    // Input for first array
    printf("Enter elements of 1st Array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input for second array
    printf("Enter elements of 2nd Array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    // Adding the two arrays
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Printing the result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
