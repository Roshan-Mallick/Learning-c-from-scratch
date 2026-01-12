#include <stdio.h>

void fillTable(int table[2][10]);
void printTable(int table[2][10]);

int main() {
    int table[2][10];

    fillTable(table);
    printTable(table);

    return 0;
}

void fillTable(int table[2][10]) {
    for (int i = 0; i < 10; i++) {
        table[0][i] = 2 * (i + 1);  // Table of 2
        table[1][i] = 3 * (i + 1);  // Table of 3
    }
}

void printTable(int table[2][10]) {
    printf("Table of 2:\n");
    for (int i = 0; i < 10; i++) {
        printf("2 x %d = %d\n", i + 1, table[0][i]);
    }

    printf("\nTable of 3:\n");
    for (int i = 0; i < 10; i++) {
        printf("3 x %d = %d\n", i + 1, table[1][i]);
    }
}

