#include "middle.h"
long long itc_bin_num(long long a){
    long long b = 0, c = 1;
    if (a < 0)
        if (a < 0)
        return (itc_bin_num(a * -1))* -1;
    while(a > 0){
        b += a % 2 * c;
        a = a / 2;
        c = c * 10;}
    return b;}
