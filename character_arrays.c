//
// Created by bedir on 5.03.2022.
//

#include <stdio.h>
#define  MAXLINE 10

int Gline(char s[], int lim) {
    int c,i;

    for (c=0;c<lim-1 && (c=getchar()) != EOF && c != '\n';i++) {
        putchar(c);
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i=0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}


int main() {
    int len,max;
    char line[MAXLINE],longest[MAXLINE];
    max =0;

    while ((len = Gline(line,MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s",longest);

    return 0;
}

