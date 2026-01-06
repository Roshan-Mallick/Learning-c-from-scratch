#include <stdio.h>
#include <math.h>

// Function declarations
double areaSquare(double side);
double areaCircle(double radius);
double areaRectangle(double length, double width);

int main() {
    int choice;
    double s, r, l, w, area;

    printf("Area Calculator\n");
    printf("1. Square\n");
    printf("2. Circle\n");
    printf("3. Rectangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter side of square: ");
            scanf("%lf", &s);
            area = areaSquare(s);
            printf("Area of Square = %.2lf\n", area);
            break;

        case 2:
            printf("Enter radius of circle: ");
            scanf("%lf", &r);
            area = areaCircle(r);
            printf("Area of Circle = %.2lf\n", area);
            break;

        case 3:
            printf("Enter length of rectangle: ");
            scanf("%lf", &l);
            printf("Enter width of rectangle: ");
            scanf("%lf", &w);
            area = areaRectangle(l, w);
            printf("Area of Rectangle = %.2lf\n", area);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

// Function definitions

double areaSquare(double side) {
    return pow(side, 2);  // side * side
}

double areaCircle(double radius) {
    return 3.14 * pow(radius, 2);  // πr²
}

double areaRectangle(double length, double width) {
    return length * width;
}

