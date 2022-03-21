//
// Created by bedir on 11.03.2022.
//
#include "stdio.h"
#define NKEYS 100
int main(int argc, char *argv[]) {

    struct key {
        char *word;
        int count;
    } keytab[] = {
            "auto",0,
            "break",0,
            "case",0,
            "char",0,
            "const",0,
            "continue",0,
            "default",0,
            "unsigned",0,
            "void",0,
            "volatile",0,
            "while",0,
    };

    // struct key keytab[NKEYS] == keytab[NKEYS]
    for (int i=0;i<11;i++) {
        printf("%d-th value is : %s, %d \n",i,keytab[i].word,keytab[i].count);
    }
    typedef char *Osman;
    char value[] = "osman";
    Osman *val = (Osman *) value;
    printf("%c %s \n",*val,value);
}