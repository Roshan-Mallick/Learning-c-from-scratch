#include <stdio.h>

// Function declaration
int fact(int n);

int main() {
    int n, result;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Function call
    result = fact(n);

    // Output
    printf("Factorial of %d = %d\n", n, result);

    return 0;
}

// Function definition (recursive function)
int fact(int n) {
    // Base condition
    if (n == 0 || n == 1) {
        return 1;  
    }

    // Recursive call
    return n * fact(n - 1);
}

