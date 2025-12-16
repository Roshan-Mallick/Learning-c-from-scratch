#include <stdio.h>

int main() {
    int day, weather;

    printf("Enter day (1=Mon, 2=Tue, 3=Wed): ");
    scanf("%d", &day);

    printf("Enter weather (1=Snow, 2=Rain, 3=Sun): ");
    scanf("%d", &weather);

    if (day == 1) {
        if (weather == 1)
            printf("It is Monday and it is snowing\n");
        else
            printf("false\n");
    }
    else if (day == 2) {
        if (weather == 2)
            printf("It is Tuesday and it is raining\n");
        else
            printf("false\n");
    }
    else if (day == 3) {
        if (weather == 3)
            printf("It is Wednesday and it is sunny\n");
        else
            printf("false\n");
    }
    else {
        printf("Invalid input\n");
    }

    return 0;
}

