#include <stdio.h>
#include<ctype.h>

int main() {
    int x = 1, y;
    int a, b, c, d;
    printf("Tell a->");
    scanf("%d", &a);

    printf("Tell b->");
    scanf("%d", &b);

    if (a > b) {
        while (x < 2) {
            do {
              printf("Tell next number: ");
                scanf("%d", &c);
                if (!isdigit(c)) {
                    printf("Invalid input. Try again.\n");
                    while (getchar() != '\n');
                } else {
                    break;
                }
            } while (1);

            if (c > a) {
                a = c;
                d = c;
            } else {
                d = a;
            }

            printf("If you want to stop press 3 else press 1 ->");
            scanf("%d", &y);
            x = y;
        }
    } else {
        while (x < 2) {
            do {
                printf("Tell next number: ");
                scanf("%d", &c);
                if (!isdigit(c)) {
                    printf("Invalid input. Try again.\n");
                    while (getchar() != '\n');
                } else {
                    break;
                }
            } while (1);

            if (c > b) {
                b = c;
                d = c;
            } else {
                d = b;
            }
            printf("If you want to stop press 3 else press 1 ->");
            scanf("%d", &y);
            x = y;
        }
    }

    printf("Largest no. = %d", d);
    return 0;
}
