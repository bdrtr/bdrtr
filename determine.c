//
// Created by bedir on 5.03.2022.
//
#include <stdio.h>

int power(int base, int pow) {
    int p = 1;

    for (int i=1;i<pow;i++)
        p = p*base;

    return p;
}
int main() {
    long int a;
    int b;
    short int c;
    double d;
    float e;

    b = 0;
    long int pow = power(10,5);
    for (b;b<pow;) {
        b += 1000;
        a += b;
        printf("%d \n",a);
    }

    return 0;
}
