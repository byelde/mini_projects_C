# include <stdio.h>
# include <stdlib.h>
# include <math.h>

float calculateArea( float height, float width ) {

    return height * width;

};

int lampQuantity (float area, int type) {

    return ceil(area/type);

};

struct datas {
    int type;
    float width;
    float height;
    float area;
    int quantLamps;
};
typedef struct datas datas;

int main () {

    system("cls");

    datas roomData;
    int roomTypes[5] = {12, 15, 18, 20, 22};

    do {

        printf("Room Type [0-4]: ");
        scanf("%i", &roomData.type);
        fflush(stdin);

        if ( roomData.type == -1 ) {
            break;
        }

        printf("Room Width: ");
        scanf("%f", &roomData.width);
        fflush(stdin);
        printf("Room Height: ");
        scanf("%f", &roomData.height);
        fflush(stdin);

        roomData.area = calculateArea(roomData.height, roomData.width);
        roomData.quantLamps = lampQuantity( roomData.area, roomTypes[roomData.type] );

        printf("Quantity of lamps: %i\n\n", roomData.quantLamps);

    } while (1);
}