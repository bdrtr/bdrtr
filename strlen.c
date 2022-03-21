//
// Created by bedir on 5.03.2022.
//
#include <stdio.h>

int power(int base, int pow) {
    int p=1;
    for (int i=0;i<pow;i++)
        p *= base;

    return p;
}
int lower(int chars) {
    return (chars >= 'A' && chars <= 'Z') ? chars-'A'+'a' : -1;
}
unsigned getbts(unsigned x, int p, int n) {

    return (x >> (p+1-n) & ~(~0 << n));

}
char squeeze(char s[], int a) {
    int i,j,b;
    for (i=j=0;s[i] != '\0';i++)
        if (s[i] != a)
            s[j++] = s[i];
    s[j] = '\0';

    for (b=0;s[b] != '\0';b++)
        printf("%c \n",s[b]);
}

unsigned bit(unsigned x) {
    x &= (x-1);
    return x;
}
int main() {

    unsigned int c;
    short int z,l,m;
    char mer[] = "merhaba";
    //enum boolean {yes, no};
    //printf("");
    squeeze(mer, 'a');
    c = getbts(4, 2, 1);
    printf("%d \n", c);
    printf("%d \n",(5&4));

    l = 1;
    m  = 2;
    printf("bit: %d \n",bit(5));
    z = (l>=m) ? l : m;
    printf("%d \n",z);

    /*char a[] = "bedir tugra karaabalı benim adım";
    for (int i=0;a[i] != '\0';i++) {
        printf("%6d%c",a[i], (i%10==9 || i==27) ? '\n':' ');
    }
    */
    printf("%c letter smalled as : %c \n",'T',lower('T'));

    int n=2;
    ++n;
    printf("%d, %d \n",n,power(n,2));

    char a[] = "ALİBABA";
    a[n++] = 2;
    printf("%d \n",a[--n]);

    if ( n > 10)
        if (n > 12)
            printf("taht");
        else
            printf("that's wrong");

    else
        printf("that'S worng");

}