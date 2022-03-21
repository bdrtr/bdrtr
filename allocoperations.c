//
// Created by bedir on 10.03.2022.
//
#include "stdio.h"
#define ALLOCSIZE 1000
static char allocbuf[ALLOCSIZE];
static char *allocp = &allocbuf[0]; //allocbuf

char *alloc(int n) {
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
        return allocp-n;
    }// adres değeri + toplam hafıza - adres değeri >= n eğer doğruysa o alan uygun
    else {
        return 0;
    }
}
void afree(char *p) {
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}
int strLen(char *s) {
    char *p = s;
    while (*p != '\0')
        p++;
    return p - s;
}

void strcopyX(char *s, char *t) {
    while ((*t++ = *s++) != '\0'); // that's copies of pointers process
}
void strcopyY(char *s, char *t) {
    while(*t++ = *s++);
}

int strcmpX(char *s, char *t) {
    int i;
    for (i=0;s[i] == t[i];i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
};

int strCMP(char *s, char *t) {
    while (*s++ == *t++) if (*t != '\0') return 0;
    return *--s-*--t;

}
void writeLines(char *lineptr[], int nlines) {
    while (nlines-- > 0)
        printf("%s \n", *lineptr++);
}

int main() {
    for (int i=0;i<10;i++) {
        printf("allocbuf[%d] : %d , adress val: %d \n",i+1,allocbuf[i],&allocbuf[i]);
    }
    printf("allocbuf %d \n",allocbuf);
    printf("allocp : %d \n",allocp);
    printf("is free: %d \n", allocbuf+ALLOCSIZE-allocp);

    printf("%s kelimesinin uzunlugu %d \n", "bedir",strLen("bedir"));
    char *pms;
    pms = "now it's time";
    printf("%d \n", pms);

    char string[] = "nabersin?";
    char string2[10];
    char string3[10];

    printf("string : %s , before : %s \n",string,string2);
    strcopyX(string,string2);
    printf("string : %s , just copied: %s \n",string,string2);
    printf("string: %s, before copied: %s \n",string,string3);
    strcopyY(string,string3);
    printf("string : %s , just copied: %s \n",string,string3);

    char val[] = "bir", val2[] = "iki", val3[] = "bir";
    printf("strcmpx: %d \n", strcmpX(val,val2));
    printf("strcmp: %d \n", strCMP(val,val2));

    int maxline = 100;
    char *lines[maxline];
    for (int i=0;i<10;i++) {
        printf("%d -> %d \n",i,*lines[i]);
    }


};