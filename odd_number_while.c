#include <stdio.h>

int main() {
   int i = 0 ;
   int input;
   while (i<=1){
     printf("enter number");
      scanf("%d",&input);
   
       if (input % 2 != 0) {
          break;
       }
        
   }
   printf(" %d odd number entered \n",input);
   
    return 0;
}

