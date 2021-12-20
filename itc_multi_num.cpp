#include "middle.h"
long long itc_multi_num(long long a){
    int b = 1;
    if (a == 0){
        return 0;
    }else{
    if (a < 0)
        a = a * -1;
    while(a > 0){
        b = b * (a % 10);
        a = a / 10;}
    return b;}
    return -1;}
