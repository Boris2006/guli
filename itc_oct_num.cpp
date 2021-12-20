#include "middle.h"

long long itc_oct_num(long long a){
    long long b = 0, c = 1;
    if (a < 0)
        return (itc_oct_num(a * -1))* -1;
    while(a > 0){
        b += a % 8 * c;
        a = a / 8;
        c = c * 10;}
    return b;}
