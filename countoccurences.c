#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000], a;
    printf("Enter a sentence: ");
    scanf(" %[^\n]", s);
    printf("Enter a character to check: ");
    scanf(" %c", &a); 
    a = tolower(a);
    int i = 0, c = 0;
    while (s[i] != '\0') {
        if (s[i] == a || tolower(s[i]) == a) {
            c++;
        }
        i++;
    }
    printf("The count of the character is = %d\n", c); 
    return 0;
}
  