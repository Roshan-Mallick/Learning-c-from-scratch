#include <stdio.h>

int main() {
    int table[2][10];

    // Fill the table
    for (int i = 0; i < 10; i++) {
        table[0][i] = 2 * (i + 1);  // Table of 2
        table[1][i] = 3 * (i + 1);  // Table of 3
    }

    // Print the tables
    printf("Table of 2:\n");
    for (int i = 0; i < 10; i++) {
        printf("2 x %d = %d\n", i + 1, table[0][i]);
    }

    printf("\nTable of 3:\n");
    for (int i = 0; i < 10; i++) {
        printf("3 x %d = %d\n", i + 1, table[1][i]);
    }

    return 0;
}

