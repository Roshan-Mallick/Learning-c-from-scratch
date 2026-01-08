

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
     int x = 0 , y = 1 , z = 0 ;
      int i = 0 ;
      while (i<= n) 
      {
         printf("%d", x);
         z = x + y;
         x = y;
         y = z;
         
         
         
        i++;
      }
      

    

    return 0;
}


