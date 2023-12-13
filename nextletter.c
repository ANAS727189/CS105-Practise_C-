#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    int i = 0;

    while (str[i] != '\0') {
        if (isalpha(str[i])) { 
            if (str[i] == 'z' || str[i] == 'Z') {
                str[i] = str[i] - 25;
            } else {
                str[i]++;
            }
        }
        i++;
    }

    printf("The converted string is: %s\n", str);

    return 0;
}
