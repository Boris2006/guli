#include "middle.h"

int itc_rev_bin_num(long long a){
    long long b = 0, c = 1;
    if (a < 0)
        if (a < 0)
        return (itc_rev_bin_num(a * -1))* -1;
    while(a > 0){
        b += a % 10 * c;
        a = a / 10;
        c = c * 2;}
    return b;}