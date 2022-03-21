//
// Created by bedir on 20.03.2022.
//
#include "stdio.h"
#include "math.h"

struct complex {
    int reel;
    int imaginal;
}
complicate;

int main(int argc, char *argv[]) {
    float a , b, c;

    printf("ax^2 + bx + c olmak uzere a degerini giriniz >> ");
    scanf("%f",&a);

    printf("ax^2 + bx + c olmak uzere b degerini giriniz >> ");
    scanf("%f",&b);

    printf("ax^2 + bx + c olmak uzere c degerini giriniz >> ");
    scanf("%f",&c);

    float delta =pow(b,2)-(4*a*c);
    if (delta < 0) {

    }
        //printf("reel kok bulunmamaktadir.");

    float Dsqrt = sqrt(delta);
    //printf("delta: %f, delta2: %f \n",delta,Dsqrt);

    float x1 = (-b+ Dsqrt)/2*a;
    float x2 = (-b- Dsqrt)/2*a;

    printf("%.1fx^2 + %.1fx + %.1f \n",a,b,c);
    printf("kok 1: %.1f, kok 2: %.1f \n",x1,x2);
}