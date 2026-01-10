#include<stdio.h> 

int main (){
 
   printf("Enter a : ");
   int a;
   scanf("%d",&a);

   printf("Enter b : ");
   int b;
   scanf("%d",&b);
   
   



int *pa = &a;
int *pb = &b;

if (*pa > *pa) {
   printf("a is the maximum number : %d \n ", *pa ) ;
} else {
   printf("b is the maximum number : %d \n ", *pb ) ; 
}




}
