#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char str[]);

int main() {
    int t;
    printf("Enter no of test cases : ");
    scanf("%d", &t);
    getchar();  

    while (t--) {
        char str[1000], rev[1000] = " ", word[1000];
        printf("Enter a sentence: ");
        fgets(str, 1000, stdin);


       if (str[strlen(str) - 1] == '\n') {
            str[strlen(str) - 1] = '\0';
        }

        reverse(str);
        strcat(str, " ");
        int j = 0;

        for (int i = 0; str[i] != '\0'; i++) {
            if (str[i] == ' ') {
                word[j] = '\0';
                reverse(word);
                strcat(rev, word);
                strcat(rev, " ");
                j = 0;
            } else {
                word[j] = str[i];
                j++;
            }
        }
        printf("Reversed String is: %s\n", rev);
    }
    return 0;
}

void reverse(char str[]) {
    int n, i;
    for (n = 0; str[n] != '\0'; n++); 

    for (i = 0; i < n / 2; i++) {
        char ch = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = ch;
    }
}
