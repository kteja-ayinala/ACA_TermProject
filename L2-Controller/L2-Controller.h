//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_L2_CONTROLLER_H
#define ACA_TERMPROJECT_L2_CONTROLLER_H



#include "../Address/Address.h"
#include "../Queue/Queue.h"

typedef struct L2Controller_Struct{
    int l2_Tag ;
    int l2_Index;
    int l2_Offset;
    int l2_blocks;
    int l2_BlockSize;
    int l2_CpuBits;
    void (*l2_Write)(Address address, int value);
    int (*l2_Read)(Address address);
    Queue queueL2CToL2D;
    Queue queueL2CToM;
    Queue queueL2CToL1C;
}L2Controller;

L2Controller invoke_l2Controller();

int l2_Read(Address addr);
void l2_Write(Address addr, int value);





#endif //ACA_TERMPROJECT_L2_CONTROLLER_H

