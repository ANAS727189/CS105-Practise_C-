#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int lines = 0;
    int blankLines = 0;
    int comments = 0;
    char line[1000];
    int inComment = 0; // 0: not in comment, 1: single-line comment, 2: multi-line comment

    while (fgets(line, sizeof(line), stdin)) {
        lines++;

        // Check if the line is blank (contains only white spaces)
        int isBlank = 1;
        for (int i = 0; line[i] != '\0'; i++) {
            if (!isspace(line[i])) {
                isBlank = 0;
                break;
            }
        }

        if (isBlank) {
            blankLines++;
        }

        // Check if the line is a comment
        int lineLength = strlen(line);
        for (int i = 0; i < lineLength; i++) {
            if (inComment == 0 && line[i] == '/' && i < lineLength - 1) {
                if (line[i + 1] == '/') {
                    comments++;
                    break; // Single-line comment, so no need to check the rest of the line
                } else if (line[i + 1] == '*') {
                    comments++;
                    inComment = 2; // Start of multi-line comment
                    i++; // Skip the '*' character
                }
            } else if (inComment == 2 && line[i] == '*' && i < lineLength - 1 && line[i + 1] == '/') {
                comments++;
                inComment = 0; // End of multi-line comment
                i++; // Skip the '/' character
            }
        }
    }

    printf("Total lines: %d\n", lines);
    printf("Blank lines: %d\n", blankLines);
    printf("Comment lines: %d\n", comments);

    return 0;
}
