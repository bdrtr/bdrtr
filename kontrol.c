//
// Created by bedir on 20.03.2022.
//
#include "stdio.h"
#include "math.h"

int main(void){
    double a,b,c,delta,kok1,kok2;
    printf("a,b ve c katsayilarini giriniz: ");
    scanf("%lf %lf %lf ",&a,&b,&c);
    delta = pow(b,2)-4*a*c;

    if(delta>0){
        kok1 = ((-b+sqrt(delta))/(2*a));
        kok2 = ((-b+sqrt(delta))/(2*a));
        printf("%lf %lf",kok1,kok2);
    }
    else if(delta==0){
        kok1=kok2= -b/2*a;
        printf("kok1=kok2= %lf ",kok1);
    }
    else
        printf("denklemin gerçek çözümü YOK");


}
