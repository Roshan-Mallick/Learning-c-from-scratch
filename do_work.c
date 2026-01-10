#include <stdio.h>                 // Includes standard input/output functions like printf()

// Function declaration (prototype)
// Takes two integers a and b, and three integer pointers for sum, product and average
void doWork(int a, int b, int *sum, int *prod, int *avg);

int main() {                       // Program execution starts here
    int a = 3, b = 5;              // Declare and initialize two integers
    int sum, prod, avg;            // Declare variables to store results

    doWork(a, b, &sum, &prod, &avg);  // Call doWork and pass addresses of sum, prod and avg

    // Print the results
    printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);

    return 0;                      // End of program
}

// Function definition
void doWork(int a, int b, int *sum, int *prod, int *avg) {

    *sum = a + b;                  // Store sum of a and b in the memory pointed by sum
    *prod = a * b;                 // Store product of a and b in the memory pointed by prod
    *avg = (a + b) / 2;            // Store average of a and b in the memory pointed by avg
}

