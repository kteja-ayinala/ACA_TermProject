//
// Created by Krishna Teja Ayinala on 2019-05-27.
//

#ifndef ACA_TERMPROJECT_L1_H
#define ACA_TERMPROJECT_L1_H

#include <stdio.h>
#include "../Address/Address.h"
#include "../Block/Block.h"
#include "../Queue/Queue.h"



typedef struct L1Controller_Struct{
    int l1_Tag;
    int l1_Index;
    int l1_Offset;
    int l1_SetCount;
    int l1_BlockSize;
    int l1_CpuBits;
    void (*l1_Write)(Address address, int value);
    int (*l1_Read)(Address address);
    bool (*isHit)(Address address);
    bool (*isValid)(int index, int tag);
    bool (*isDirty)(int index, int tag);
    void (*setState)(int index, char* state);
    Queue queueL1CToL1D;
    Queue queueL1CToL2C;
    Queue queuePTOL1C;
    Queue queueL1CToProcessor;
}L1Controller;

L1Controller invoke_l1Controller();

int l1_Read(Address addr);
void l1_Write(Address addr, int value);
bool isL2Hit(Address addr);
bool isL2Valid(int index, int tag);
bool isL2Dirty(int index, int tag);
void setState(int index, char* state);



#endif //ACA_TERMPROJECT_L1_H
