//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

//block address
//tag
//index
//offset

#include<stdio.h>
#include<stdlib.h>

int * convertAddressToBinary(int addr) {
    int n = addr;
    int bits = 17;
    int  i;
    int * a = malloc(bits);
//    char * s = malloc(bits);
    for (i = 0; n>0; i++) {
        a[i] = n % 2;
        n = n / 2;
    }
    for (i = i - 1; i >= 0; i--) {
        printf("%d", a[i]);
    }
    return a;
}

