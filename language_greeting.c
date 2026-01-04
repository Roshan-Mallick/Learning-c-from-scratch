#include<stdio.h> 

void printHello ();
void printBonjour ();

int main () {

   printf("Enter i for indian and f for french : ");
   char ch;
   scanf("%c", &ch);
    switch (ch) {
        case 'i' : printHello ();
              break;
        case 'f' : printBonjour ();
              break;
        default : printf("invalid input");
    }
    return 0 ;
}

void printHello () {
    printf("Hello \n");
}
void printBonjour () {
    printf("Bonjour \n ");
}
