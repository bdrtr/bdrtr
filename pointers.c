//
// Created by bedir on 9.03.2022.
//
#include "stdio.h"
#include "ctype.h"

double *dp, atof(char *);

int getch(void);
void ungetch(int);
/*
int getINT(int *pn) {
    int c,sign;

    while (isspace(c=getch())); // skip white space

    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c); // that isn't a number
        return 0;
    }

    sign = (c == '-') ? -1 : 1;
    if (c == '-' || c == '+')
        c = getch();

    for (*pn=0; isdigit(c);c=getch()) {
        *pn = 10 * *pn+ (c-'0');
    }
    *pn *= sign;
    if (c!=EOF)
        ungetch(c);
    return c;
}
 */
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapP(int *px, int *py) {
    int temp = *px;
    *px = *py;
    *py = temp;
}

int getInt(int *i) {
    printf("entered value: %d \n",*i);
    return *i;
}


int strLen(char *s) {
    int n;
    for (n=0; *s != '\n';s++)
        n++;
    return n;
}
int main() {
    //char c[] = {'a','b','c'};
    int *p;
    int x = 1, y = 2, z[10];

    printf("val x: %d, val y: %d \n",x,y);
    p = &x;
    printf("val x: %d pointer: %d \n",x,p);
    y = *p;
    printf("val y: %d pointer: %d \n",y,p);
    *p = 0;
    printf("val x: %d pointer: %d \n",x,p);
    p = &z[0];
    printf("val z: %d pointer: %d \n",z,p);

    for(int i=0;i<10;i++) {
        p = &z[i];
        printf("Z %d's adress of the memory : %d \n",i,p);
    }

    char a = 'a';

    char *ip = &a; // bellekteki adresi
    //ip = ip + 10;
    //*ip = *ip + 1;

    printf("ascii value for 'a' : %d \n",'a');
    for (int i=0;i<5;i++) {
        //++*ip;
        *ip += 1;
        printf("value of ip: %c , adress of memory %d \n",*ip,ip);
    }
    int c=2, b=3;
    //swap(c,b);
    //swapP(c,b);
    printf("c: %d b: %d  \n",c,b);

    int n, array[4] = {1,2,3,4}, getint(int *);
    //for (n=0;n<4 && getInt(&array[n]) != EOF;n++);
    int *pp,*pp2;
    pp = &array[0];
    pp2 = array;
    printf("is these same: %c, %c \n",*pp+'0',*pp2+'0');
    char word[] = "naber";
    printf("naber of the length: %d \n", strLen(&word[1])); //other hand -> word+1
    int loopval;
    char *vals = word;
    for (loopval=0; *vals != '\n';vals++,loopval++);
    printf("i: %d \n",loopval);
}
