//
// Created by bedir on 7.03.2022.
//
#include <stdio.h>

int calculateScore(int first, int end, int proj) {
    return ((first*3/10) + (end*5/10) + (proj*2/10));
}
int main() {
    int notes2[3];
    int i;
    printf(">> ");
    for (i=0;i<3;i++)
        scanf("%d",&notes2[i]);

    int notes[] = {100,50,85};
    printf("ders ortlaman: %d \n", calculateScore(notes2[0],notes2[1],notes2[2]));
    printf("ders ortlaman: %d \n", calculateScore(notes[0],notes[1],notes[2]));
}
