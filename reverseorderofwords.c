#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int strLen = strlen(str);

    // Reverse the entire string
    int start = 0;
    int end = strLen - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    start = 0;
    end = 0;

    while (end < strLen) {
        if (str[end] == ' ') {
            // Reverse each word
            int wordStart = start;
            int wordEnd = end - 1;
            while (wordStart < wordEnd) {
                char temp = str[wordStart];
                str[wordStart] = str[wordEnd];
                str[wordEnd] = temp;
                wordStart++;
                wordEnd--;
            }
            start = end + 1;
        }
        end++;
    }

    // Reverse the last word
    end = strLen - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }


    reverseWords(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
