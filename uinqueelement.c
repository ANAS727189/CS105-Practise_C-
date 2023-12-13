#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[1000];

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int isUnique = 1; // Assume all elements are unique initially

    for (int i = 0; i < n - 1; i++) {
        int count = 1; // Initialize the count for each element
        if (arr[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1; // Mark the duplicate element to avoid counting it again
                }
            }
        }
        if (count > 1) {
            isUnique = 0; // Found a duplicate
            printf("Element %d is not unique and is repeated %d times.\n", arr[i], count);
        }
    }

    if (isUnique) {
        printf("All elements are unique.\n");
    }

    return 0;
}
