#include <stdio.h>

void tempConvert(int c);

int main() {
    int c;
    printf("Enter a temp in Celsius: ");
    scanf("%d", &c);

    tempConvert(c);
    return 0;
}

void tempConvert(int c) {
    float f = (9.0 / 5.0) * c + 32;   // force floating-point division
    printf("The temp in Fahrenheit is: %.2f\n", f);
}

