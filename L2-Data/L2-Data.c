//
// Created by Krishna Teja Ayinala on 2019-05-28.
//


#include "L2-Data.h"

struct L2Block L2Data[256];

void initL2Data()
{
    int i;
    for (i = 0; i < 256; i++)
    {
        L2Data[i].valid = 0;
        L2Data[i].dirty = 0;
    }
}
