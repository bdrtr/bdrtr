#include <stdio.h>

#define Lower 0

int main() {
    /*printf("hello, world \n");
    int a = function(12);
    printf("%s",a);*/

    for (int fahr=Lower;fahr<=200;fahr+=20) {
        printf("fahr-> %3d celcius-> %6.1f\n",fahr,5.0*(fahr-32.0)/9.0);
    }
    return 0;


}

int function(int a) {
    return a*a;
}