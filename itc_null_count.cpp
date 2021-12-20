#include "middle.h"

int itc_null_count(long long a){
    int b = 0;
    if (a == 0){
        return 1;}
    else{
        if (a < 0)
            a *= -1;
        while(a > 0){
            if (a % 10 == 0){
                b ++;}
            a /= 10;}
      return b;}
    return -1;}
