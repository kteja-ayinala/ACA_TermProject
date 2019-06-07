//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_L2_DATA_H
#define ACA_TERMPROJECT_L2_DATA_H

#include "../Address/Address.h"
#include "L2-Data.h"

typedef struct L2_Struct {
    int l2_Tag;
    int l2_Index;
    int l2_Offset;
    int l2_blocks;
    int l2_BlockSize;
    int l2_CpuBits;
    unsigned char data[32];
    Queue queueL2DToL2C;
} L2Data;

L2Data invoke_L2Data();

#endif //ACA_TERMPROJECT_L2_DATA_H
