#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];
    int a[26] = {0};
    scanf("%[^\n]", str);

    int i = 0;
    while (str[i] != '\0') {
        char c = tolower(str[i]);
        if (c >= 'a' && c <= 'z') {
            a[c - 'a']++;
        }
        i++;
    }

    int max = a[0];

    for (int j = 1; j < 26; j++) {
        if (a[j] > max) {
            max = a[j];
        }
    }

    printf("Maximum frequency character(s) is/are: ");
    for (int j = 0; j < 26; j++) {
        if (a[j] == max) {
            printf("%c ", j + 'a');
        }
    }

    printf("\nMAXIMUM OCCURRING CHARACTER occurs %d times\n", max);

    return 0;
}
