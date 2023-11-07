# include <stdio.h>
# include <string.h>
# include <stdlib.h>

// Show wich characters appears in both strings

int main () {

    system("cls");

    char string1[50] = {"HeLLo WorLd"};
    char registerLetters[50] = {"\0"};
    char string2[50] = {"Ola Mundo"};
    int inBoth, inReg, notSpace, counterReg = 0;
    size_t i;

    strlwr(string1);
    strlwr(string2);

    for (i = 0; i < strlen(string1); i++) {

        notSpace = string1[i] != 32;
        inBoth = (strchr(string2, string1[i]) != NULL);
        inReg = (strchr(registerLetters, string1[i]) != NULL);

        if (notSpace && inBoth && !inReg) {
            registerLetters[counterReg] = string1[i];
            counterReg++;
        }
    };

    puts("TEXTS --------------------");
    printf("%s\n", string1);
    printf("%s\n", string2);

    puts("\nCHARACTERS ---------------");
    for (i = 0; i < strlen(registerLetters); i++) {
        printf("%c - ", registerLetters[i]);
    }
}