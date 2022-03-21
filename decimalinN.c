//
// Created by bedir on 9.03.2022.
//
#include "stdio.h"
#define rng(a,b) (a > b) ? a:b
#define sq(x) x*x
#define p(x)  printf("hello my friend %s \n", x);

void print(int n) {
    if ( n < 0) {
        putchar('-');
        n *= -1;
    }

    if (n/10) {
        printf("n degeri %d \n", n);
        print(n / 10);
    }

    putchar(n%10 + '0');
}


int main() {
    //char s[] = {'m','e','r','h','a','b','a','\0'};
    //int i = 123456;
    printf("define: %d \n",rng(13,22));
    printf("sq: %d \n",sq(2+1));
    p("OSMAN");
}