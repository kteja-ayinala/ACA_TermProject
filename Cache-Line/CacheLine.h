//
// Created by Krishna Teja Ayinala on 2019-06-04.
//

#ifndef ACA_TERMPROJECT_CACHELINE_H
#define ACA_TERMPROJECT_CACHELINE_H

#include "../Address/Address.h"
#include <stdio.h>
#include "../uthash-master/include/uthash.h"
#include "../Block/Block.h"


typedef struct CacheLine_Struct {
    int validBit;
    int dirtyBit;
    int tag;
    int offset;
    Address address;
    char data[4];
}CacheLine;


CacheLine invoke_CacheLine(Address address, char data[4]);

#endif //ACA_TERMPROJECT_CACHELINE_H
