#include<stdio.h>
int main () {
     float a , b , c;
     printf("Enter a b c check which is smallest \n");
     scanf("%f %f %f", &a , &b , &c);
     if (a <= b && a <= c ) {
        printf("a is smallest which is %f \n" , a);
     } else if (b <= c && b <= a) {
        printf("b is the smallest number which is %f \n" ,b);
     } else {
        printf ("c is the smallest number which is %f \n" , c);
     }
     return 0;
    
}

