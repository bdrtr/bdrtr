//
// Created by bedir on 20.03.2022.
//

#include <stdio.h>

int main(int argc,char *argv[]) {
    float sum;
    float d;
    printf("5 adet sayi girin > ");
    for(int i=0;i<5;i++) {
        scanf("%f",&d);
        sum += d;
    }
    printf("ort: %f \n",sum/5);

}