#include <stdio.h>

int main() {

    int day ;
    printf("Enter the day number (1-7), where 1 = Monday and 7 = Sunday: ");
    scanf("%d",&day);
    switch (day)
    {
    case 1 : printf("Monday \n");
            break;
    case 2 : printf("Tuesday \n");
            break;
    case 3 : printf("Wednesday \n");
            break;
    case 4 : printf("Thursday \n");
            break;
    case 5 : printf("Friday \n");
            break;
    case 6 : printf("Saturday \n");
            break;
    case 7 : printf("Sunday \n");
            break;   
    default: printf("invalid user input \n");
       
    }


}



