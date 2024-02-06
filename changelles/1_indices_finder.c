// 1. Write a C program to get the indices of two 
// numbers in a given array of integers. This will enable
// you to get the sum of two numbers equal to a specific target.
//
// Expected Output:
// Original Array: 4  2  1  5  
// Target Value: 7
// Indices of the two numbers whose sum equal to target value: 7
// 1 3


# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main () {

    system("cls");

    int array[51];
    int targetValue;
    int sizeArray;
    int i, i2, done;

    // INPUT
        // ARRAY SIZE
        // ARRAY ITEMS

    puts("Array size:");
    scanf("%i", &sizeArray);

    puts("");

    puts("Original array:");
    for (i = 0; i < sizeArray ; i++) {

        printf("%i Element: ", i+1);
        scanf("%i", &array[i]);

    }

    puts("");

    puts("Target Value:");
    scanf("%i", &targetValue);

    puts("");


    // PROCESS & OUTPUT

    for ( i = 0; i < sizeArray; i++) {
        for ( i2 = 0; i2 < sizeArray; i2++) {
            if ( array[i] + array[i2] == targetValue ){
                puts("Indices of the two numbers whose sum equal to target value:");
                printf("%i %i", i, i2);
                done = 1;
                break;
            }
        };

        if (done) {
            break;
        };
    }
}