#include <stdio.h>

int main() {
    int n, count;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    int arr[1000], index[1000], c = 0, key;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter key element to be searched: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index[c] = i;
            c++;
        }
    }

    if (c >= 1) {
        printf("Key element is present and is repeated %d times at positions: ", c);
        for (int i = 0; i < c; i++) {
            printf("%d", index[i] + 1); 
            if (i < c - 1) {
                printf(", ");
            }
        }
        printf("\n");
    } else {
        printf("Key not found\n");
    }

    return 0;
}
