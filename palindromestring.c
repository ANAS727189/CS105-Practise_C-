#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000], revstr[1000];
    scanf("%[^\n]s", str);
    int i = 0, k = strlen(str);

    while (str[i] != '\0') {
        str[i] = tolower(str[i]);
        revstr[k - 1] = str[i];
        k--;
        i++;
    }

    revstr[strlen(str)] = '\0';

    int flag = 1;
    for (int i = 0; i < strlen(str); i++) {
        if (revstr[i] != str[i]) {
            flag = 0;
            break; // No need to continue checking if a mismatch is found
        }
    }

    if (flag) {
        printf("Palindrome string\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
