# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int validateInput ( char input[51] ) {
    int i;
    
    for (i = 0; i < strlen(input); i++) {
        if ( !((input[i] >= '0') && ( input[i] <= '9')) ){
            return 0;
            break;
        }
    };

    return 1;
}
int main () {

    char inputN1[51], inputN2[51];
    float numbers[3];

    do {
        printf("First number: ");
        scanf("%s", inputN1);
        fflush(stdin);

        if (validateInput(inputN1)) {
            break;
        } else {
            puts("Please, type a valid value.");
        }

    } while (1);
    
    do {
        printf("Second number: ");
        scanf("%s", inputN2);
        fflush(stdin);

        if (validateInput(inputN2)) {
            break;
        } else {
            puts("Please, type a valid value.");
        }

    } while (1);

    numbers[0] = atoi(inputN1);
    numbers[1] = atoi(inputN2);

    if ( numbers[0] > numbers[1] ) {
        printf("%.2f is the bigger one.", numbers[0]);

    } else if ( numbers[0] < numbers[1] ) {
        printf("%.2f is the bigger one.", numbers[1]);

    } else {
        puts("Both are equals.");

    };

}