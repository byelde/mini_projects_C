// 2. Write a C program to find the length of the longest substring of a given string without repeating characters.
// Expected Output:

//  Original String: xyzxyzyy  
//  Length of the longest substring without repeating characters: 3

# include <stdlib.h>
# include <stdio.h>
# include <string.h>

int main () {

    system("cls");

    char string[51];
    size_t sizeString, i;
    int posInOnce = 0; // current position for 'once' array;
    char once[51];

    printf("Original String: ");
    scanf("%50[^\n]s", string);

    sizeString = strlen(string);

    for ( i = 0; i < sizeString; i++) {

     // If each character isn`t already registered in 'once'
        if ( strchr(once, string[i]) == NULL ) {
            once[posInOnce] = string[i];
            once[posInOnce+1] = '\0';
            posInOnce++;
        };

    };

    printf("Length of the longest substring without repeating characters: %lld (%s)\n", strlen(once), once);
}