#include<stdio.h> 

int sum (int a , int b);

int main () {
    int a , b ;

    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number to get the sum of a and b : ");
    scanf("%d",&b);
    int final = sum (a , b);
    printf("the sum of a and b is : %d \n", final);
 return 0;

}

int sum (int x , int y) {
    return x + y;
}


