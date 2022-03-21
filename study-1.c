//
// Created by bedir on 20.03.2022.
//
#include "stdio.h"

int main(int argc, char *argv[]) {
    int increament = 1;
    int initalizer = 47;
    int enderNum = 121;
    for (;initalizer<=enderNum;initalizer+=increament) {
        if (initalizer % 5 == 0 && initalizer % 3 == 0) {
            printf("%d \n", initalizer);
            increament=15; //optimization
        }

    }
}


