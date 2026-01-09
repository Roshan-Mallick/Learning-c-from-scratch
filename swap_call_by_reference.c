#include <stdio.h>

/* Function declaration (prototype) */
void swap_ref(int *a, int *b);

int main()
{
    int x = 3, y = 5;

    printf("Before swap: x = %d, y = %d\n", x, y);

    /* Function call */
    swap_ref(&x, &y);

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}

/* Function definition */
void swap_ref(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("Inside swap_ref: a = %d, b = %d\n", *a, *b);
}

