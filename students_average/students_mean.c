# include <stdio.h>
# include <stdlib.h>
# include <string.h>

struct studentData {
    char name[50];
    int id;
    float grade1;
    float grade2;
    float mean;
    char status[3];
};

typedef struct studentData studentData;
int main () {

    char charManyStudent[4];
    int intManyStudents = 0;
    int i = 0, c = 0;
    int validQuantityStudents, validId;

    system("cls");

    do {
        validQuantityStudents = 1;

        printf("STUDENT REGISTER-------------------------------\n");
        printf("How many students do you wanna register? ");
        scanf("%s", charManyStudent);
        fflush(stdin);
        system("cls");

        for (i = 0; i < strlen(charManyStudent); i++) {

            if ( !((charManyStudent[i] >= '0') && ( charManyStudent[i] <= '9')) ) {
                puts("Please, type a valid quantity.");
                validQuantityStudents = 0;
                break;

            } else {
                intManyStudents = atoi(charManyStudent);

            }
        };


    } while ( validQuantityStudents != 1);


    studentData studentList[intManyStudents];

    for (i = 0; i < intManyStudents; i++) {

        printf("%i STUDENT ---------------------------------------\n", i+1);

        printf("Name: ");
        scanf("%49[^\n]s", studentList[i].name);
        fflush(stdin);

        do {
            validId = 1;
            printf("Id: ");
            scanf("%i", &studentList[i].id);
            fflush(stdin);

            for ( c = 0; c < intManyStudents; c++) {
                if ((studentList[i].id == studentList[c].id && c != i)) {
                    validId = 0;
                    puts("Id already took. Choose other.");
                    break;
                }
            }

        } while ( validId != 1 );

        printf("Grade 1: ");
        scanf("%f", &studentList[i].grade1);
        fflush(stdin);

        printf("Grade 2: ");
        scanf("%f", &studentList[i].grade2);
        fflush(stdin);

    };

    system("cls");

    for (i = 0; i < intManyStudents; i++) {
        studentList[i].mean = ((studentList[i].grade1 + studentList[i].grade2)/2);

        if ( studentList[i].mean >= 7.0 ) {
            strcpy(studentList[i].status, "AA");
        } else {
            strcpy(studentList[i].status, "FA");
        }
    };

    printf("RESULT ----------------------------------------\n\n");
    for (i = 0; i < intManyStudents; i++){

        printf("\n%i STUDENT ---------------------------------------\n", i+1);

        printf("Name: %s\n", studentList[i].name);
        printf("Id: %i\n", studentList[i].id);
        printf("Grade 1: %.2f\n", studentList[i].grade1);
        printf("Grade 2: %.2f\n", studentList[i].grade2);
        printf("Mean: %.2f\n", studentList[i].mean);
        printf("Staus: %s\n", studentList[i].status);

    };

}