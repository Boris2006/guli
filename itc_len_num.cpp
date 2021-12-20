#include "middle.h"
int itc_len_num(long long a){
    if (a < 0){
        a = a * -1;}
    int b = 0;
    if (a == 0){
       b += 1;
       return b;}
    else{
        while (a > 0){
            a = a / 10;
            b += 1;}
    return b;}}
