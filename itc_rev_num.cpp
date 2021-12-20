#include "middle.h"

int itc_rev_num(long long a){
    long long b = 0;
    if (a < 0)
        a *= -1;
    while(a > 0){
        b = b * 10 + a % 10;
        a /= 10;}
    return itc_len_num(b);}

