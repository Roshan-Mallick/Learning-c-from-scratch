#include <stdio.h>

int main() {
    int day, weather;

    printf("Enter day (1=Mon, 2=Tue, 3=Wed, 4=Thu, 5=Fri, 6=Sat, 7=Sun): ");
    scanf("%d", &day);

    printf("Enter weather (1=Snow, 2=Rain, 3=Sun): ");
    scanf("%d", &weather);

    if (day == 1 && weather == 1)
        printf("It is Monday and it is snowing\n");

    else if (day == 2 && weather == 2)
        printf("It is Tuesday and it is raining\n");

    else if (day == 3 && weather == 3)
        printf("It is Wednesday and it is sunny\n");

    else if (day == 4 && weather == 1)
        printf("It is Thursday and it is snowing\n");

    else if (day == 5 && weather == 2)
        printf("It is Friday and it is raining\n");

    else if (day == 6 && weather == 3)
        printf("It is Saturday and it is sunny\n");

    else if (day == 7 && weather == 3)
        printf("It is Sunday and it is sunny\n");

    else if (day < 1 || day > 7 || weather < 1 || weather > 3)
        printf("Invalid input\n");

    else
        printf("false\n");

    return 0;
}
