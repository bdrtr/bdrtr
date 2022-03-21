//
// Created by bedir on 14.03.2022.
//
#include "stdio.h"
#include <locale.h>


int main(int argc, char *argv[]) {
    setlocale(LC_ALL,"Turkish");
    struct square {
        unsigned kisa_kenar:4;
        unsigned uzun_kenar:8;
    } kare;
    int shapes[] = {9,18};
    kare.kisa_kenar = shapes[0];
    kare.uzun_kenar = shapes[1];
    printf("kısa kenar %d, uzun kenar %d alan: %d \n",shapes[0],shapes[1],shapes[0]*shapes[1]);
    printf("kısa kenar %d, uzun kenar %d alan: %d \n",kare.kisa_kenar,kare.uzun_kenar,(kare.kisa_kenar*kare.uzun_kenar));
}