//
// Created by bedir on 7.03.2022.
//
#include <stdio.h>

dummy() {}
int strIndexF(char source[], char searchF[]) {
    int i,j,k;

    for (i=0;source[i] != '\0';i++) {
        for (j=i ,k = 0; searchF[k] != '\0' && searchF[k] == source[j]; j++, k++);
        if ( k > 0 && searchF[k] == '\0')
            return i;
    }
     return -1;
}

int main() {

    char txt[]  = "merhabalar efendiler nasilsiniz";
    char src[] = "er";
    printf("bu kelime '%s' , burda mevcut %d \n",src,strIndexF(txt,src));
    return 0;
}

