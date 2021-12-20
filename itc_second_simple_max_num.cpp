#include "middle.h"

int itc_second_simple_max_num(long long a){
    int b = 0, c = 0; 
    if (itc_len_num(a) == 1)
        return -1;
    if (a < 0)
        a = a * -1;
     if (itc_len_num(a) == 1){
        b = a;
        c = a;}
    else{
    while(a > 0){
        int e = a % 10;
        if (e >= c){
            b = c;
            c = e;}
        if (e >= b && e < c)
            b = e;
        a = a / 10;}}
    if (c == b)
        return -1;
    return b;}