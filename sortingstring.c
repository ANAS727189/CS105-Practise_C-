#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar(); // Consume the newline character left in the input buffer

    char strings[1000][1000];

    for (int i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);
        
        // Remove the trailing newline character without using strcspn
        for (int j = 0; strings[i][j] != '\0'; j++) {
            if (strings[i][j] == '\n') {
                strings[i][j] = '\0';
                break;
            }
        }
    }

    // Sorting the strings
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                char temp[1000];
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
