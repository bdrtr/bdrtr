//
// Created by bedir on 15.03.2022.
//
#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"
#include "string.h"

int main(int argc, char *argv[]) {

    int arr[] = {1, 2, 3};
    int *p = arr;
    for (int i = 0; i < 3; i++) {
        printf(" %dbyte \n", &arr[0] - p++);
    }

    int *ip = (int *) malloc(1);
    *ip = 127;

    printf("bellek baslangic adresi: %d \n", ip);
    printf("deger: %d \n", *ip);
    free(ip);
    printf("%d \n", ip);

    char c[] = "naber";
    printf("%c \n", c[strlen(c)-1]);
}
