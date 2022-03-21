//
// Created by bedir on 11.03.2022.
//
#include "stdio.h"

int main(int argc, char *argv[]) {

    struct point {
        int x;
        int y;
    };

    struct point origin, *pp;
    origin.x = 12;
    origin.y = 24;
    pp = &origin;

    printf("values of structer %d, %d \n",(*pp).x,(*pp).y);
    printf("values of structer %d, %d \n",pp->x,pp->y);



}
