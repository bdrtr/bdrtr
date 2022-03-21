//
// Created by bedir on 10.03.2022.
//
#include "stdio.h"

static char daytab[2][13] = {
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}

};

int day_of_year(int year, int month, int day) {
    int i,leap;

    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    for (i=1;i<month;i++)
        day += daytab[leap][i];
    return day;
}

void mont_of_day(int year, int yearday, int *pmonth, int *pday) {
    int i,leap;
    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    for (i=1;yearday>daytab[leap][i];i++) {
        yearday -= daytab[leap][i];
    }
    *pmonth = i;
    *pday = yearday;
}

char *month_name(int n) {
    static char *name[] = {
            "illegal month",
            "Januray","Februrary","March",
            "April","May","June","August","September",
            "October","November","December"};
    return (n<1 || n > 12) ? name[0]:name[n];
}
int main() {
    for (int i=0;i<12;i++) {
        printf(" %d-th month of the year %s \n",i, month_name(i));
    }

}