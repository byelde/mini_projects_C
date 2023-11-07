# include <stdio.h>
# include <stdlib.h>

int SumArray ( int array[], int size ) {
    int sum = 0;
    int *pointerArray;
    int *finalArray = (array + size);

    for ( pointerArray = array; pointerArray < finalArray; ++pointerArray) {
        sum += *pointerArray;
    };

    return sum;

};

int main () {

    system("cls");

    int numbers[10] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int numSize = 10;
    int result;

    result = SumArray( numbers, numSize );
    printf("%i", result);
}