# include <stdio.h>
# include <string.h>
# include <stdlib.h>

// FUNCTIONS DECLARATION
int validFloat( char input[50] );
int validDot ( char input[50] );
int justNumbersOrDot( char input[50] );

int main () {

    char inputFloat[50];

    system("cls");

    do {
        puts("Type a float");
        scanf("%s", inputFloat);
        fflush(stdin);

        if ( validFloat( inputFloat ) ) {
            puts("Valid float!");
            break;
        } else {
            puts ("Please, type a valid float.");
        }
    
    } while (1);

    return 0;

}

// FUNCTION BODIES
int validFloat( char input[50] ) {

    if ( !validDot( input ) ) {
        return 0;
    } else if (!justNumbersOrDot( input )) {
        return 0;
    }

    return 1;

}

int validDot ( char input[50] ) {

    char *firstDot, *lastDot;
    int oneDot, endDot;
    size_t lenInput = strlen(input);

    // DOT TREATMENT

        // Save dots adress
    firstDot = strchr(input, '.');
    lastDot = strrchr(input, '.');

        // Check if the dot is on one end
    endDot = (input[0] == '.' || input[lenInput-1] == '.');

        // Check if there is a dot or 'endDot'
    if ( (firstDot == NULL) || endDot ) {
        oneDot = 0;
    } else {
        // Check is there is just one dot
        oneDot = !(strcmp(firstDot, lastDot));
    };

    
    if ( oneDot != 1 ) {
        return 0;
    } else {
        return 1;
    }

}

int justNumbersOrDot( char input[50] ) {

    size_t i, lenInput;
    int isNumberOrDot;

    lenInput = strlen(input);
    
    // NUMBERS TREATMENT
    for ( i = 0; i < lenInput; i++ ) {

        // Check if there is just numbers characters or dots in the input
        isNumberOrDot = ( ((input[i] >= '0') && (input[i] <= '9')) || (input[i] == 46) );

        if ( !(isNumberOrDot) ) {
            return 0;
        };

    };

    return 1;

}