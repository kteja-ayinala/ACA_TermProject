//
// Created by Krishna Teja Ayinala on 2019-05-28.
//


#include "L1-Data.h"

struct L1Block L1Data[128];

void initL1Data() {
    int i;
    for (i = 0; i < 128; i++) {
        L1Data[i].valid = 0;
        L1Data[i].dirty = 0;
    }
}

