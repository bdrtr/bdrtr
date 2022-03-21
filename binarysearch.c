//
// Created by bedir on 6.03.2022.
//
#include <stdio.h>


int binarysS(int x, int v[], int n) {
    int low,high,mid;

    low = 0;
    high = n-1;

    while (low <= high) {
        mid = (low+high)/2;
        if (x < v[mid])
            high = mid -1;
        else if (x > v[mid])
            low = mid+1;
        else
            return mid;
    }

    return -1;
}

int count(int array[]) {
    int  i;
    for (i=0;array[i] != '\0';i++);
    return i;
}

int main() {

    int val[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    printf(" result: %d \n", binarysS(5,val,8));
}
