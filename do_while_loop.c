#include <stdio.h>

int main() {

   int count;
   int sum = 0;
   printf("Enter number ");
   scanf("%d",&count);
   for(int i=0;i<=count;i++){
      sum = sum+i;
      printf("%d \n",sum);
   }
    return 0;


}
