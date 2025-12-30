#include <stdio.h>

int main() {

   int count;
   int sum = 0;
   printf("Enter number ");
   scanf("%d",&count);
   for(int i=0,j=count;i<=count && j>=0;i++,j--){
      sum = sum+i;
      printf("%d \n",j);
   }
    printf(" sum is %d \n",sum);


  
    return 0;


}


 
