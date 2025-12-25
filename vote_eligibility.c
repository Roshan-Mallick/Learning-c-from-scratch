#include <stdio.h>

int main() {
    int birthYear, currentYear, age;

    printf("Enter your birth year: ");
    scanf("%d", &birthYear);

    printf("Enter current year: ");
    scanf("%d", &currentYear);

    age = currentYear - birthYear;

    printf("Your age is %d\n", age);

    if (age >= 18) {
        printf("You are eligible to vote because your age is %d, which is 18 or more.\n", age);
    } else {
        printf("You are not eligible to vote because your age is %d, which is less than 18.\n", age);
    }

    return 0;
}

