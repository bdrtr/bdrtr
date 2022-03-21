//
// Created by bedir on 20.03.2022.
//
#include "stdio.h"
#include "math.h"
#include "locale.h"

#define PI 3.14

int main(int argc, char *argv[]) {
    setlocale(LC_ALL,"Turkish");
    float r;

    printf("yaricapi giriniz >> ");
    scanf("%f",&r);

    printf("%f yaricapli kurenin hacmi : %f \n",r,(4/3)*PI*pow(r,3.0));
}