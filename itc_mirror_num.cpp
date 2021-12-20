#include "middle.h"

bool itc_mirror_num(long long a){
    if (a == 0){
        return true;}
    else{
        if (a < 0)
            a = a * -1;
        int b = a, c = 0;
        while(a > 0){
            int d = a % 10;
            c = c * 10 + d;
            a = a / 10;
        }
        if (b == c)
            return true;
        return false;
    }
}