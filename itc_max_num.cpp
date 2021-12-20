#include "middle.h"

int itc_max_num(long long a){
    int b = 0, c;
    if (a < 0)
        a = a * -1;
    while(a > 0){
        c = a % 10;
        if (b < c){
            b = c;}
        a /= 10;}
    return b;}
