//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

#include "stdio.h"
#include "L1-Data.h"
#include "../Block/Block.h"
#include "../Queue/Queue.h"


int l1_Tag ;
int l1_Index;
int l1_Offset;
int l1_SetCount;
int l1_BlockSize;
int l1_CpuBits;
Block way1[64];
Block way2[64];
Block way3[64];
Block way4[64];


L1Data invoke_L1Data(){
    L1Data l1D = {l1_Tag:6, l1_Index:6, l1_Offset:5, l1_SetCount:64, l1_BlockSize:32, l1_CpuBits:17};
    for (int i = 0; i < 64; i++) {
        way1[i] = invoke_Block();
        way1[i].validBit = 0;
        way2[i] = invoke_Block();
        way2[i].validBit = 0;
        way3[i] = invoke_Block();
        way3[i].validBit = 0;
        way4[i] = invoke_Block();
        way4[i].validBit = 0;
    }
    l1D.queueL1DToL1C = Invoke_Queue();
    printf("\n L1D invoked");
    return l1D;
}



