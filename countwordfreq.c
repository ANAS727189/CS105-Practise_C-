#include <stdio.h>
#include <string.h>

int main() {
    char inputString[1000];
    char wordToCount[50];
    
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printf("Enter the word to count: ");
    scanf("%s", wordToCount);

    int count = 0;
    int inputStringLength = strlen(inputString);
    int wordToCountLength = strlen(wordToCount);

    for (int i = 0; i <= inputStringLength - wordToCountLength; i++) {
        int j;
        for (j = 0; j < wordToCountLength; j++) {
            if (inputString[i + j] != wordToCount[j]) {
                break;
            }
        }
        if (j == wordToCountLength) {
            count++;
            i += wordToCountLength - 1; // Skip past the word
        }
    }

    printf("The word '%s' appears %d times in the given string.\n", wordToCount, count);

    return 0;
}
