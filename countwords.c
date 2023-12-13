#include <stdio.h>

#include <ctype.h>

int main() {
    char str[1000];
    int words = 0;
   int check =0 ;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i]) && check == 0) {
            words++;
           check = 1;
        } else if (isspace(str[i]) || str[i] == '\n') {
           check = 0;
        }
    }

    printf("Total words: %d\n", words);

    return 0;
}
