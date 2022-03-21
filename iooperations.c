//
// Created by bedir on 13.03.2022.
//
#include "stdio.h"
#include "ctype.h"

char Upper(int chr) {
    return chr + 'A'-'a';
}

char Lower(int chr) {
    return chr + 'a'-'A';
}

int main(int argc, char *argv[]) {
    int c;
    while((c=getchar()) != EOF)
        putchar(c);
}