//
// Created by Krishna Teja Ayinala on 2019-05-30.
//


//Implement Block structure
#ifndef ACA_TERMPROJECT_BLOCK_H
#define ACA_TERMPROJECT_BLOCK_H

#include "../Address/Address.h"
#include "stdbool.h"

typedef struct Block_Struct {
    int validBit;
    int dirtyBit;
    int tag;
    int offset;
    char data[32];
}Block;

Block invoke_Block();



#endif //ACA_TERMPROJECT_BLOCK_H



