//
// Created by bedir on 6.03.2022.
//
#include <stdio.h>
#include <ctype.h>

int findFact(int num) {

    return (num==0) ? 1 : (num*(findFact(num-1)));
}

int atoi(char s[]) {
    int i,n,sign;

    for (i=0;isspace(s[i]);i++);
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (n=0;isdigit(s[i]);i++)
        n = 10 * n + (s[i] - '0');

    return sign * n;
}
int main() {

    char data[] = "-1223";
    printf("char val: %s -> int val: %d \n",data,atoi(data));



    int x=10;
    int y=5;
    x = y^x;
    y = x^y;
    x = x^y;

    printf("%d x, %d y \n",x,y);

    int val = 5;
    printf("num: %d \n",findFact(5));

}
