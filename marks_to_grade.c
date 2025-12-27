#include <stdio.h>

int main() {

    int marks;
    printf("Enter marks between 0 - 100 \n");
    scanf("%d",&marks);
    int result =  (marks < 0 || marks > 100) ? printf ("invalid user input \n"): ( marks > 30 && marks < 70) ? printf("you got C \n") : (marks > 70 && marks < 90) ? printf("you got b \n"): (marks > 90 &&  marks < 100) ? printf ("you got A \n"): printf("you failed \n") ; 

    return 0;


}



