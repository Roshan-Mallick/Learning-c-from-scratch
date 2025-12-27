#include <stdio.h>

int main() {

    int day ;
    printf("Enter the day:\n");
    printf("1 = Monday\n");
    printf("2 = Tuesday\n");
    printf("3 = Wednesday\n");
    printf("4 = Thursday\n");
    printf("5 = Friday\n");
    printf("6 = Saturday\n");
    printf("7 = Sunday\n");
    printf("Enter your choice (1-7): ");
    scanf("%d",&day);
    int weather;
    printf("Enter the weather type:\n");
    printf("1 = Sunny\n");
    printf("2 = Cloudy\n");
    printf("3 = Breezy\n");
    printf("4 = Windy\n");
    printf("5 = Foggy\n");
    printf("6 = Misty\n");
    printf("7 = Rainy\n");
    printf("Enter your choice (1-7): ");
    scanf("%d", &weather);

    switch (day)
    {
    case 1 : printf("Monday \n");
             switch ( weather) {
                case 1: printf("Sunny\n"); break;
                case 2: printf("Cloudy\n"); break;
                case 3: printf("Windy\n"); break;
                case 4: printf("Breezy\n"); break;
                case 5: printf("Foggy\n"); break;
                case 6: printf("Misty\n"); break;
                case 7: printf("Rainy\n"); break;
               
             }
            break;
             
    case 2 : printf("Tuesday \n");
              switch ( weather) {
                case 1: printf("Sunny\n"); break;
                case 2: printf("Cloudy\n"); break;
                case 3: printf("Windy\n"); break;
                case 4: printf("Breezy\n"); break;
                case 5: printf("Foggy\n"); break;
                case 6: printf("Misty\n"); break;
                case 7: printf("Rainy\n"); break;
               
             }
            break;
    case 3 : printf("Wednesday \n");
              switch ( weather) {
                case 1: printf("Sunny\n"); break;
                case 2: printf("Cloudy\n"); break;
                case 3: printf("Windy\n"); break;
                case 4: printf("Breezy\n"); break;
                case 5: printf("Foggy\n"); break;
                case 6: printf("Misty\n"); break;
                case 7: printf("Rainy\n"); break;
               
             }
            break;
    case 4 : printf("Thursday \n");
              switch ( weather) {
                case 1: printf("Sunny\n"); break;
                case 2: printf("Cloudy\n"); break;
                case 3: printf("Windy\n"); break;
                case 4: printf("Breezy\n"); break;
                case 5: printf("Foggy\n"); break;
                case 6: printf("Misty\n"); break;
                case 7: printf("Rainy\n"); break;
               
             }
            break;
    case 5 : printf("Friday \n");
              switch ( weather) {
                case 1: printf("Sunny\n"); break;
                case 2: printf("Cloudy\n"); break;
                case 3: printf("Windy\n"); break;
                case 4: printf("Breezy\n"); break;
                case 5: printf("Foggy\n"); break;
                case 6: printf("Misty\n"); break;
                case 7: printf("Rainy\n"); break;
               
             }
            break;
    case 6 : printf("Saturday \n");
             switch ( weather) {
                case 1: printf("Sunny\n"); break;
                case 2: printf("Cloudy\n"); break;
                case 3: printf("Windy\n"); break;
                case 4: printf("Breezy\n"); break;
                case 5: printf("Foggy\n"); break;
                case 6: printf("Misty\n"); break;
                case 7: printf("Rainy\n"); break;
               
             }
            break;
    case 7 : printf("Sunday \n");
             switch ( weather) {
                case 1: printf("Sunny\n"); break;
                case 2: printf("Cloudy\n"); break;
                case 3: printf("Windy\n"); break;
                case 4: printf("Breezy\n"); break;
                case 5: printf("Foggy\n"); break;
                case 6: printf("Misty\n"); break;
                case 7: printf("Rainy\n"); break;
               
             }
            break;   
    default: printf("invalid user input \n");
       
    }


}



