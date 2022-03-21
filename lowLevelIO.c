//
// Created by bedir on 15.03.2022.
//
#include "stdbool.h"
#include <string.h>
#include "stdlib.h"
#include "stdio.h"
#include <fcntl.h>

int solution(const char *string, const char *ending) {
    int len = strlen(string)-strlen(ending);
    char c = strcmp(string+len,ending);
    printf("%s \n",string+len);
    printf("%d \n",&string);
}
int main(int argc, char *argv[]){
    int val = solution("merhaba","ba");
    //printf("%d \n",val);
}