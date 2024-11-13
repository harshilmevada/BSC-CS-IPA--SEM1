#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    // Taking input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number
    original = num;

    // Reversing the number
    while (num != 0) {
        remainder = num % 10;             // Get the last digit
        reversed = reversed * 10 + remainder; // Add it to the reversed number
        num /= 10;                         // Remove the last digit
    }

    // Checking if the original number and reversed number are the same
    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
