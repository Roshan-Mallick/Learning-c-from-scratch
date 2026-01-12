#include <stdio.h>

int main() {
    int marks[2][3];

    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 40;
    marks[1][0] = 55;
    marks[1][1] = 58;
    marks[1][2] = 57;

    // Print all numbers
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("marks[%d][%d] = %d\n", i, j, marks[i][j]);
        }
    }

    return 0;
}

