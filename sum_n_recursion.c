#include <stdio.h>

// Function declaration
int sum(int n);

int main() {
    int n, result;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Function call
    result = sum(n);

    // Output
    printf("Sum of first %d numbers = %d\n", n, result);

    return 0;
}

// Function definition (recursive function)
int sum(int n) {
    // Base condition
    if (n == 0) {
        return 0;
    }

    // Recursive call
    return n + sum(n - 1);
}

