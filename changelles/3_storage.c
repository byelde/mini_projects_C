# include <stdio.h>
# include <stdlib.h>

void outputTable ( int rows, int columns, int storage[5][5] ) {

    puts("\nSTORAGE");
    printf("            ");
    for (columns = 0; columns < 5; columns++){
        printf("P%i ", columns);
    };
    puts("");
    
    for ( rows = 0; rows < 5; rows++ ) {
        printf("Storage %i | ", rows);
        for (columns = 0; columns < 5; columns++) {
            printf("%i ", storage[rows][columns]);
        };
        puts("");
    };

}

void retireProducts (int qnt, int rows, int columns, int storage[5][5]) {

    if ( qnt > storage[rows][columns] ) {
        printf("\nInsufficent quantity.\n");
    } else {
        storage[rows][columns] -= qnt;
        printf("\nDone\n");
        outputTable( rows, columns, storage );
    };

}; 

int main () {

    system("cls");

    int rows, columns, qnt, ok = 1;
    int storage[5][5] = {
                        {150,0,100,150,200},
                        {200,300,230,100,90},
                        {250,300,0,200,150},
                        {300,100,90,450,0},
                        {350,300,400,250,200}
    };

    do {
        system("cls");

        outputTable( rows, columns, storage );

        printf("\n\nProduct: ");
        scanf("%i", &columns);

        printf("Storage: ");
        scanf("%i", &rows);

        printf("Quantity: ");
        scanf("%i", &qnt);

        system("cls");

        retireProducts ( qnt,  rows,  columns,  storage );

        printf("\n\nDo you wish continue?\n[0] NO\n[1] YES\nOption:");
        scanf("%i", &ok);
    } while (ok);
}