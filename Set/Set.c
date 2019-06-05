//
// Created by Krishna Teja Ayinala on 2019-05-30.
//

#include "../Address/Address.h"
#include "../Block/Block.h"
#include "Set.h"
#include <stdio.h>

int totalSets = 64;
int offset = 5;
int blockLocatorBits = 2;
int indexBits = 6;
int tagBits = 4;

Set invoke_Set(int numberOfBlocks, Address address){
    Set set = {numberOfBlocks:numberOfBlocks, address:address};
    return set;
}


void checkIfExists(Address address){

}

void addBlockData(Address address){

}

void removeBlockData(Address address){

}

void clearSet(){

}

void displayBlocks(){

}
