#include <stdio.h>

int main() {
  int num = 1;

   int *ptr = &num;

   printf("The location of ptr is ptr is =  %u\n",ptr);
  ptr++;
     printf("The location of ptr is ptr is =  %u\n",ptr);

    return 0;
}

