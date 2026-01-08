#include <stdio.h>

// Function declaration
float marksCalculate(float math, float science, float english);

int main() {
    float result;
    float m = 78;
    float s = 87;
    float e = 75;

    result = marksCalculate(m, s, e);

    printf("Average marks = %.2f\n", result);

    return 0;
}

// Function definition
float marksCalculate(float math, float science, float english) {
    float avg;
    avg = (math + science + english) / 3;
    return avg;
}

