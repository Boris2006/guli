#include "middle.h"

int itc_mirror_count(long long a){
    int b = 0;
    if (a > 0){
        for (long long i = 1; i <= a; i++){
            if (itc_mirror_num(i))
                b++;}}
    else{
        for (long long i = a ; i <= 1; i++){
        if (itc_mirror_num(i)){
            b++;
    }}
    return b;}
