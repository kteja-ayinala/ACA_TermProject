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
//Queue queueL2CToL2D;
//Queue queueL2CToM;
//Queue queueL2CToL1C;



L2Controller invoke_l2Controller(){
    L2Controller l2Controller = {l2_Tag:3, l2_Index:9, l2_Offset:5, l2_blocks:512, l2_BlockSize:32, l2_CpuBits:17};
    l2Controller.queueL1CToL2C = Invoke_Queue();
    l2Controller.queueL2CToL2D = Invoke_Queue();
    l2Controller.queueL2CToM = Invoke_Queue();
    l2Controller.queueL2CToL1C = Invoke_Queue();
    l2Controller.queueMToL2C = Invoke_Queue();
    l2Controller.l2_Read = &l2_Read;
    l2Controller.l2_Write = &l2_Write;
    l2Controller.isHit = &isHit;
    l2Controller.isValid = &isValid;
    l2Controller.isDirty = &isDirty;
//    l2Controller.setState = &setState;
    printf("\n L2C invoked");
    return l2Controller;

}

bool isHit(char* addr){
    Address address = format_address(addr,3,9,5);
    int index = address.Index;
    int tag = address.Tag;
    bool isIncache1 = Cache[index].tag == tag && Cache[tag].validBit;
    if(isIncache1 ){
        return true;
    }
    return false;
}

bool isValid(char*  addr){
    Address address = format_address(addr,3,9,5);
    bool valid = true;
    if(!Cache[address.Index].validBit ){
        return false;
    } else{
        if(Cache[address.Index].tag == address.Tag){
            valid = Cache[address.Index].validBit;
        }
        return valid;
    }
}

bool isDirty(char*  addr){
    bool dirty = false;
    Address address = format_address(addr,3,9,5);

    if(Cache[address.Index].tag == address.Tag){
        dirty = Cache[address.Index].dirtyBit;
        return dirty;
    }
    return dirty;
}


int l2_Read(Address address){
    printf("l2C_Read");
}
void l2_Write(Address address, int value){
    printf("l2C_Write");
}



