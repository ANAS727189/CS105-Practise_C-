#include <stdio.h>
#include <string.h>

void replaceFirstOccurrence(char str[], char find, char replace) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] == find) {
            str[i] = replace;
            break; // Replace the first occurrence and exit the loop
        }
    }
}

int main() {
    char str[1000];
    char find, replace;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to find: ");
    scanf(" %c", &find); // Space before %c to consume any leading whitespace

    printf("Enter the character to replace it with: ");
    scanf("%c", &replace);

    replaceFirstOccurrence(str, find, replace);

    printf("Modified string: %s", str);

    return 0;
}
