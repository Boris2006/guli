#include "middle.h"

int itc_rev_oct_num(long long a){
    long long b = 0, c = 1;
    if (a < 0)
        return (itc_rev_oct_num(a * -1))* -1;
    while(a > 0){
        b += a % 10 * c;
        a = a / 10;
        c = c * 8;}
    return b;}
