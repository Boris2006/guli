#include "middle.h"

int itc_sum_num(long long a){
    int b = 0;
    if (a < 0){
        a = a * -1;}
    while(a > 0){
        b += a % 10;
        a = a / 10;}
    return b;}
