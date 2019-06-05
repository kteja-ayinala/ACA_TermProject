//
// Created by Krishna Teja Ayinala on 2019-06-04.
//

#include "CacheLine.h"

int validBit;
int dirtyBit;
int tag;
int offset;
Address address;
char data[4];

CacheLine invoke_CacheLine(Address address, char data[4]){
    CacheLine cacheLine = {address:address, data:data};
    return cacheLine;
}

