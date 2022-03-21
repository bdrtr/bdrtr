//
// Created by bedir on 9.03.2022.
//

#include "stdio.h"

int deg(int a, int b, register reg) {
    printf("before the compute %d \n",reg);
    int z = a + b;
    printf("after the compute %d \n",reg);
    return z;
}
int main() {
    int b,a;
    b = 1;
    if (a == b) { int i = 12; }

    register long excees;
     /*for (int i=0;i<a;i++)
        printf("calısıyo %d",excees);
    }
      */
    printf("reg outside of func %d \n",excees);
    printf("result %d \n",deg(12,2,excees));
    printf("reg outside of func but forther %d \n",excees);
}