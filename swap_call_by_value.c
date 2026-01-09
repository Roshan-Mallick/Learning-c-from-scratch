#include <stdio.h>

/* Function declaration (prototype) */
void swap_val(int a, int b);

int main()
{
    int x = 3, y = 5;

    printf("Before swap: x = %d, y = %d\n", x, y);

    /* Function call */
    swap_val(x, y);

    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}

/* Function definition */
void swap_val(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swap_val: a = %d, b = %d\n", a, b);
}

