//
// Created by Krishna Teja Ayinala on 2019-05-27.
//

#include "L1-Controller.h"
#include "stdio.h"
#include "Block.h"
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
//Queue queueL1CToL1D;
//Queue queueL1CToL2C;
//Queue queueL1CToProcessor;


L1Controller invoke_l1Controller(){
    L1Controller l1Controller = {l1_Tag:6, l1_Index:6, l1_Offset:5, l1_SetCount:64, l1_BlockSize:32, l1_CpuBits:17};
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
    l1Controller.queueL1CToL1D = Invoke_Queue();
    l1Controller.queueL1CToL2C = Invoke_Queue();
    l1Controller.queuePTOL1C = Invoke_Queue();
    l1Controller.queueL1CToProcessor = Invoke_Queue();

    l1Controller.l1_Read = &l1_Read;
    l1Controller.l1_Write = &l1_Write;
    l1Controller.isHit = &isHit;
    printf("\n L1C invoked");
    return l1Controller;
}

int l1_Read(Address address){
    printf("l1_Read");
}
void l1_Write(Address address, int value){
    printf("l1_Write");
}

bool isHit(Address addr){
    int index = addr.Index;
    int tag = addr.Tag;
    bool isIncache1 = way1[tag].tag == way1[tag].validBit;
    bool isIncache2 = way2[tag].tag == way2[tag].validBit;
    bool isIncache3 = way3[tag].tag == way3[tag].validBit;
    bool isIncache4 = way4[tag].tag == way4[tag].validBit;
    if(isIncache1 || isIncache2 || isIncache3 || isIncache4){
        return true;
    }
}

