//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

#include "stdio.h"
#include "L2-Controller.h"
#include "../Block/Block.h"
#include "../Queue/Queue.h"

int l2_Tag ;
int l2_Index;
int l2_Offset;
int l2_blocks;
int l2_BlockSize;
int l2_CpuBits;
Block Cache[512];
Queue queueL2CToL2D;
Queue queueL2CToM;
Queue queueL2CToL1C;



L2Controller invoke_l2Controller(){
    L2Controller l2Controller = {l2_Tag:3, l2_Index:9, l2_Offset:5, l2_blocks:512, l2_BlockSize:32, l2_CpuBits:17};
    queueL2CToL2D = Invoke_Queue();
    queueL2CToM = Invoke_Queue();
    queueL2CToL1C = Invoke_Queue();
    l2Controller.l2_Read = &l2_Read;
    l2Controller.l2_Write = &l2_Write;
    printf("\n L2C invoked");
    return l2Controller;

}

int l2_Read(Address address){
    printf("l2C_Read");
}
void l2_Write(Address address, int value){
    printf("l2C_Write");
}



