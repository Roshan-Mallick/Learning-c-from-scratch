#include <stdio.h>


void reverse (int num[] , int n);

int main() {
  
  int num [] = {1,2,3,4,5,6};

  reverse(num,6);

   for (int i = 0; i < 6; i++) {
        printf("%d ", num[i]);
    }
    printf("\n");

 return 0;
}


void reverse (int num[], int n) {


   for (int i = 0; i < n/2 ; i++ ) {
        int f1value = num[i];
        int r1value = num [n - i - 1];
        num[i] = r1value;
        num[n - i - 1] = f1value;

   }

   return;

}


