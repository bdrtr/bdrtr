//
// Created by bedir on 7.03.2022.
//
#include "stdio.h"
#include "ctype.h"
//#include "stdlib.h"
#define MAXLINE 100

double sum, atf(double c);

char line[MAXLINE];
int getlinex(char line[], int max);

double atof(char s[]) {
    int i,sign;
    double val,power;c
    for (i=0; isspace(s[i]);i++);
    sign = (s[0] == '-') ? -1 : 1;
    if (s[0] == '+' || s[0] == '-') i++;
    for (val=0.0; isdigit(s[i]);i++)
        val = 10.0 * val + (s[i]-'0');
    if(s[i] == '.') i++;
    for ( power = 1.0; isdigit(s[i]);i++) {
        val = 10.0 * val + (s[i]-'0');
        power *= 10;
    }
    return sign*val/power;

}
int main() {
    printf("%.2f \n",atof("-123.23"));
    sum += atf(2.1);
    printf("%f \n",sum);

}