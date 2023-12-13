 #include <stdio.h>

void decimalToBase(int decimalNum, int base) {
    int result[1000];
    int i = 0;

    while (decimalNum > 0) {
        result[i] = decimalNum % base;
        decimalNum = decimalNum / base;
        i++;
    }
    printf("The number in base %d is: ", base);
    for (int j = i - 1; j >= 0; j--) {
        if (result[j] < 10) {
            printf("%d", result[j]); // Print the digit as is for values 0-9
        } else {
            printf("%c", 'A' + result[j] - 10); // Convert 10-15 to 'A'-'F' for hexadecimal
        }
    }
    printf("\n");
}

int main() {
    int decimalNum, base;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    printf("Enter the base to convert to (e.g., 2 for binary, 8 for octal, 16 for hexadecimal): ");
    scanf("%d", &base);
     if (base == 2 || base == 8 || base == 16) {
        decimalToBase(decimalNum, base);
    } else {
        printf("Unsupported base. Please enter 2, 8, or 16 for binary, octal, or hexadecimal conversion.\n");
    }
    return 0;
}


