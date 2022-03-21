//
// Created by bedir on 13.03.2022.
//
#include "stdio.h"


int main(int argc, char *argv[]) {

    struct myStruct {
        unsigned day;
        unsigned month;
        unsigned year;
    }
    date1;

    struct myStructbit {
        unsigned day:1;
        unsigned month:1;
        unsigned year;
    }
    date2;

    int mydate[] = {20,10,2022};
    date1.day = mydate[0];
    date1.month = mydate[1];
    date1.year= mydate[2];

    date2.day = mydate[0];
    date2.month = mydate[1];
    date2.year = mydate[2];

    printf("%d bytes \n", sizeof(date1));
    printf("%d bytes \n", sizeof(date2));
}