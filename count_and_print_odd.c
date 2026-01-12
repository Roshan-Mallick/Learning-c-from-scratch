#include <stdio.h>


   int countOdd (int num[] , int n);

int main() {
  

   int num [] = {1,2,3,4,5,6};
   int oddNumbers = countOdd(num,6);
   printf("Total odd numbers are : %d\n",oddNumbers);
    return 0;
}


int countOdd (int num[], int n) {

   int count = 0;
 
   printf("odd numbers are :");

   for (int i = 0 ; i < n ; i++) {
       if (num[i] % 2 != 0){
        printf("%d ",num[i]);
        count++;
       }

 
   }

   printf("\n");
   return count;

}

