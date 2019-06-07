//
// Created by Krishna Teja Ayinala on 2019-05-28.
//
#include "stdio.h"
#include "../Address/Address.h"
#include "../Block/Block.h"
#include "../Queue/Queue.h"
#include "L2-Data.h"


int l2_Tag ;
int l2_Index;
int l2_Offset;
int l2_blocks;
int l2_BlockSize;
int l2_CpuBits;
Block Cache[64];

//Queue queueL2DToL2C;

L2Data invoke_L2Data(){
    L2Data l2D = {l2_Tag:3, l2_Index:9, l2_Offset:5, l2_blocks:512, l2_BlockSize:32, l2_CpuBits:17};
    for (int i = 0; i < 512; i++) {
        Cache[i] = invoke_Block();
        Cache[i].validBit = 0;
    }
    l2D.queueL2DToL2C = Invoke_Queue();
    printf("\n L2D invoked");
    return l2D;
}

