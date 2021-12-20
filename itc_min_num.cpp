#include "middle.h"

int itc_min_num(long long a){
    int b = 10, c;
    if (a == 0){
        return 0;}
    else{
    if (a < 0)
        a = a * -1;
    while(a > 0){
        c = a % 10;
        if (b > c){
            b = c;}
        a = a / 10;}
    return b;}}
