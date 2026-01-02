#include <stdio.h>

int main() {
 
   int input;
  
   for (int i = 0; i <= 1; i++ ) {
     printf("enter number to check multiple of 7 : ");
     scanf("%d",&input); 
     if (input % 7 == 0) {
        break;
     }

   }
   printf("%d is multiple of 7 \n",input);
    return 0;
}

