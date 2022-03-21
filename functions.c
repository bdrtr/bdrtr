//
// Created by bedir on 5.03.2022.
//
#include <stdio.h>

int power(taban,p)
int taban,p;{
    int res,i;

    res = 1;

    for (i = 1; i<=p;++i)
        res = res*taban;

    return res;
}
int main() {

    printf("%d, Bu sayının karesi %3d, küpü %3d",3, power(3,2), power(3,3));
    return 0;

}

