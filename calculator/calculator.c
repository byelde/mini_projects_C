# include <stdio.h>
# include <string.h>
# include <stdlib.h>


int validateNumber ( char input[6] ) {

    size_t i;

    for (i = 0; i < strlen(input); i++) {

        if ( !((input[i] >= '0') && (input[i] <= '9')) && (input[i] != 46) ) {
            return 0;
            break;
        };

    };

    return 1;
}

int main () {

    char inputOp[2], inputN1[6], inputN2[6];
    int op;
    float n1, n2;

    system("cls");

    puts("CALCULATOR -----------------------------");
    puts("[1] SUM");
    puts("[2] SUBTRACTION");
    puts("[3] MULTIPLICATION");
    puts("[4] DIVISION");

    do {
        printf("\nOPTION: ");
        scanf("%s", inputOp);
        if (strlen(inputOp) >= 2) {
            puts("Type just ONE character.");

        } else if ( !((inputOp[0] >= '0') && (inputOp[0] <= '4')) ) {
            puts("Type just 1-4");

        } else {
            op = atoi(inputOp);
            break;

        }

    } while (1);

    puts("----------------------------------------");

    do {
        printf("Number 1: ");
        scanf("%s", inputN1);
        fflush(stdin);

        if (validateNumber(inputN1)) {
            break;
        } else {
            puts("Type a INTEGER.");
        }

    } while (1);

    do {
        printf("Number 2: ");
        scanf("%s", inputN2);
        fflush(stdin);

        if (validateNumber(inputN2)) {
            break;
        } else {
            puts("Type a INTEGER.");
        }

    } while (1);


    n1 = atof(inputN1);
    n2 = atof(inputN2);

    puts("\NRESULT ---------------------------------");

    if ( op == 1 ) {
        printf("%.4f", n1+n2);

    } else if ( op == 2 ) {
        printf("%.4f", n1-n2);

    } else if ( op == 3 ) {
        printf("%.4f", n1*n2);
        
    } else {
        printf("%.4f", n1/n2);
        
    };

}