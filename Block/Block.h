//
// Created by Krishna Teja Ayinala on 2019-05-30.
//


//Implement Block structure
#ifndef ACA_TERMPROJECT_BLOCK_H
#define ACA_TERMPROJECT_BLOCK_H

#include "../Address/Address.h"

typedef struct Block_Struct {
    int valid;
    char* tag;
    int dirty;
    Address addr;
    unsigned char data[32];
}Block;

#endif //ACA_TERMPROJECT_BLOCK_H



