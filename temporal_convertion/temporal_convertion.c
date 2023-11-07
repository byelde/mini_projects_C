# include <stdio.h>
# include <string.h>
# include <stdlib.h>

struct timeData {
    int seconds;
    int minutes;
    int hours;
};

typedef struct timeData timeData;
int main () {
     
    timeData time;
    char inputSeconds[100];
    int i, validInput;

    do {
        validInput = 1;

        printf("Time in seconds: ");
        scanf("%s", inputSeconds);
        fflush(stdin);

        for (i = 0; i < strlen(inputSeconds); i++) {
            if ( !((inputSeconds[i] >= '0') && (inputSeconds[i] <= '9'))) {
                puts("ERROR. Type a valid value.");
                validInput = 0;
                break;
            }
        }
        
    } while (!validInput);

    time.seconds = atoi(inputSeconds);

    time.hours = time.seconds/3600;
    time.seconds = time.seconds%3600;

    time.minutes = time.seconds/60;
    time.seconds = time.seconds%60;

    printf("%ih : %im : %is", time.hours, time.minutes, time.seconds);
}