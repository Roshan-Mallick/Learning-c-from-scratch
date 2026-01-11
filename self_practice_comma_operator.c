#include<stdio.h> 

int main () {


  int marks [] = {97 , 98 , 99 };

  int *p = &marks [0,1];

  printf("%d", *p);

    return 0;
}
