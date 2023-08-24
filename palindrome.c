#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *str);

int main(void) {
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0'; // Remove newline from fgets input

    if (isPalindrome(input)) {
        printf("The entered string is a palindrome.\n");
    } else {
        printf("The entered string is not a palindrome.\n");
    }

    return 0;
}

// Function to check if a string input is a palindrome
int isPalindrome(const char *str) {
    int length = strlen(str);
    int i, j;

    // Ignore spaces and convert to lowercase
    char cleanedStr[length + 1];
    int cleanedLength = 0;
    for (i = 0; i < length; i++) {
        if (!isspace(str[i])) {
            cleanedStr[cleanedLength++] = tolower(str[i]);
        }
    }
    cleanedStr[cleanedLength] = '\0';

    // Compare characters
    for (i = 0, j = cleanedLength - 1; i < j; i++, j--) {
        if (cleanedStr[i] != cleanedStr[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}
