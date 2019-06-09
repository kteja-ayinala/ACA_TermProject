//
// Created by Krishna Teja Ayinala on 2019-05-30.
//

#include "Block.h"
#include "../Address/Address.h"

int validBit;
int dirtyBit;
int tag;
int offset;
Address address;
char data[32];

Block invoke_Block(){
Block block = { validBit:1, dirtyBit:0,  tag:0, offset:0,  data:32 };
    return block;
}






