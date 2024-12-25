#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i, vowels[5] = {0}; // For simplicity, consider only 'a', 'e', 'i', 'o', 'u' as vowels

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Counting vowels
    for (i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == 'a') {
            vowels[0]++;
        } else if (tolower(str[i]) == 'e') {
            vowels[1]++;
        } else if (tolower(str[i]) == 'i') {
            vowels[2]++;
        } else if (tolower(str[i]) == 'o') {
            vowels[3]++;
        } else if (tolower(str[i]) == 'u') {
            vowels[4]++;
        }
    }

    // Displaying results
    printf("Number of vowels: %d\n", vowels[0] + vowels[1] + vowels[2] + vowels[3] + vowels[4]);
    printf("a or A: %d\n", vowels[0]);
    printf("e or E: %d\n", vowels[1]);
    printf("i or I: %d\n", vowels[2]);
    printf("o or O: %d\n", vowels[3]);
    printf("u or U: %d\n", vowels[4]);

    return 0;
}
