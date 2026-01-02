#include <stdio.h>

int main() {

  
   for (int i = 1 ; i <= 10; i++ ) {
    if ( i == 6) {
        continue;
    }
    printf("%d \n",i);
}
    return 0;
}


 /*or can be like this
   
    #include <stdio.h>

int main() {

  
   for (int i = 5 ; i <= 50; i++ ) {
    if ( i % 2 != 0) {
        printf("%d \n",i);
    }
    
}
    return 0;
}
  */ 
