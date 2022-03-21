//
// Created by bedir on 11.03.2022.
//
#include "stdio.h"
#include <math.h>

double sqrt6 (double y)
{
    double x, z, tempf;
    unsigned long *tfptr = ((unsigned long *)&tempf) + 1;
    tempf = y;
    *tfptr = (0xbfcdd90a - *tfptr)>>1;
    x =  tempf;
    z =  y*0.5;
    x = (1.5*x) - (x*x)*(x*z);    //The more you make replicates of this statement
    //the higher the accuracy, here only 2 replicates are used
    x = (1.5*x) - (x*x)*(x*z);
    return x*y;
}

float sqrt5(const float m)
{
    float i=0;
    float x1,x2;
    while( (i*i) <= m )
        i+=0.1f;
    x1=i;
    for(int j=0;j<10;j++)
    {
        x2=m;
        x2/=x1;
        x2+=x1;
        x2/=2;
        x1=x2;
    }
    return x2;
}

//double dist, sqrt(double);
int main(int argc, char *argv[]) {

    struct {} x,y,z; // declaration struct variables
    struct a; // struct instance
    struct b;

    // base struct defination
    struct point {
        int x ;
        int y ;
    };

    struct point a = {3.0,4.0};
    struct point b = {5.0,12.0};
    double p = a.x*a.x+a.y*a.y;
    printf("angle %d, %d , %0.2f \n",a.x,a.y,sqrt5(p));

    struct rectangle {
        struct point p1;
        struct point p2;
    };

    struct rectangle screen;

    screen.p1.x;
}