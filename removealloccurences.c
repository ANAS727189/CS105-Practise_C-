#include <stdio.h>
#include <string.h>

void removeOccurrences(char str[], char ch);

int main() {
    char str[1000], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the character to remove: ");
    scanf(" %c", &ch);
    removeOccurrences(str, ch);
    printf("String after removing '%c': %s", ch, str);
    return 0;
}

void removeOccurrences(char str[], char ch) {
    int readIndex = 0, writeIndex = 0;

    while (str[readIndex]) {
        if (str[readIndex] != ch) {
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
        readIndex++;
    }

    str[writeIndex] = '\0'; // Null-terminate the modified string
}
