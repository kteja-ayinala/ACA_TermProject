//
// Created by Krishna Teja Ayinala on 2019-05-30.
//

#ifndef ACA_TERMPROJECT_SET_H
#define ACA_TERMPROJECT_SET_H


#include <stdbool.h>
#include "stdio.h"
#include "../Address/Address.h"
#include "../uthash-master/include/uthash.h"


typedef struct Set_Struct {
    int numberOfBlocks;
    Address address;
}Set;

Set invoke_Set(int numberOfBlocks, Address address);


void checkIfExists(Address address);
void addBlockData(Address address);
void removeBlockData(Address address);
void clearSet();

void displayBlocks(Address address);


#endif //ACA_TERMPROJECT_SET_H
