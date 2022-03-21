//
// Created by bedir on 8.03.2022.
//
#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

#define MAXMEMORY 100
#define MAXOP 100
#define NUMBER 0
char s[MAXOP];
double val[MAXMEMORY];
int sp=0; // index on the stack

int getch(void);

void ungetch(void);

int getop(char d[]) {
    int i,c;

    while((d[0] = c = getch()) == ' ' || c == '\t');
    s[1] == '\0';
    if (!isdigit(c) && c != '.')
        return c;
    if (isdigit(c))
        while(isdigit(d[++i] = c = getch()));
    s[i] = '\0';
    if (c != EOF)
        ungetch();

    return NUMBER;
}
void push(double f) {

    if (sp < MAXMEMORY)
        val[sp++] = f;
    else
        printf("error: stack full, can't push");
}
double pop() {
    if (sp>0)
        return val[--sp];
    else
        printf("stack is empty \n");
    return 0.0;
}

main() {
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF) {
        switch (type) {
            case NUMBER:
                push(atof(s));
                break;
            case '+':
                push(pop()+pop());
                break;
            case '*':
                push(pop()+pop());
                break;
            case '-':
                op2 = pop();
                push(pop()-op2);
                break;
            case '/':
                op2 = pop();
                if (op2 != 0.0)
                    push(pop() / op2);
                else
                    printf("zero divison error");
                break;

            case '\n':
                printf("\t%.8g\n", pop());
                break;
            default:
                printf("error: unknown command %s\n",s);
                break;

        }
    }

    return 0;
}

