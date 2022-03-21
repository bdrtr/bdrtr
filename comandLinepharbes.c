//
// Created by bedir on 10.03.2022.
//
#include "stdio.h"

int val1(int a, int b) {
    return a+b;
}

int val2(int a, int b) {
    return a+b;
}

int val3(int a, int(*val2)) {
    return val2+a;
}

int main(int argc, char *argv[]) {

    //int i;
    //for (i=0;i<argc;i++)
        //printf("%s%s \n",argv[i],(i<argc-1) ? " ": "");
    printf("result: %d \n",val3(2,val2(2,2)));

    int (*ptr)[5];
    int arr[5] = {1,2,3,4,5};
    ptr = &arr;

    for (int i=0;i<5;i++)
        printf("%d-th element value is : %d \n",i,ptr[i]);

    int arr2[2][5] = {
            {1,2,3,4,5},
            {6,7,8,9,10}
    };

    int *p = &arr2;
    for (int i=0;i<2;i++)
        for (int j=0;j<5;j++)
            printf("arr[%d][%d] -th value is: %d \n",i,j,*(p+i)+j);

}

