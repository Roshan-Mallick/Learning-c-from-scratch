#include <stdio.h>

int main() {

   int input;
  
   printf("Enter input : ");
   scanf("%d",&input);
    int table_upto;
   printf("Enter table upto : ");
   scanf("%d",&table_upto);

   int table;
   for (int i=1 ; i <=table_upto;i++){
    
     table = input * i ;
     printf("%d x %d = %d\n",input , i , table );
    

   }
     
  
    return 0;


}


 
