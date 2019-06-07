//
// Created by Krishna Teja Ayinala on 2019-05-28.
//
#ifndef ACA_TERMPROJECT_L1_DATA_H
#define ACA_TERMPROJECT_L1_DATA_H


#include "../Address/Address.h"
#include "../Queue/Queue.h"

typedef struct L1_Struct {
    int l1_Tag;
    int l1_Index;
    int l1_Offset;
    int l1_SetCount;
    int l1_BlockSize;
    int l1_CpuBits;
    unsigned char data[32];
    Queue queueL1DToL1C;
} L1Data;

L1Data invoke_L1Data();

#endif //ACA_TERMPROJECT_L1_DATA_H
