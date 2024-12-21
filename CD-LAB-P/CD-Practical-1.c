#include <stdio.h>

int main() {
    char ch;
    int digits = 0, vowels = 0, symbols = 0;

    printf("Enter a string: ");
    
    while ((ch = getchar()) != '\n') {  
        if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                   ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        } else if ((ch >= 33 && ch <= 47) || (ch >= 58 && ch <= 64) || 
                   (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 126)) {
            symbols++;
        }
    }

    printf("Digits: %d\n", digits);
    printf("Vowels: %d\n", vowels);
    printf("Symbols: %d\n", symbols);

    return 0;
}
