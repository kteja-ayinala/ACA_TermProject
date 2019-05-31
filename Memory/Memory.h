//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_MEMORY_H
#define ACA_TERMPROJECT_MEMORY_H

#include "../Queue/Queue.h"
#include "../Block/Block.h"

typedef struct Memory_Struct {
    int tagLength;
    int indexLength;
    int offsetLength;
    int cpuBits;
    int blockCount;
    int blockSize;
    Queue queueToMemory;
    Queue queueFromMemory;
    Block memoryBlock;
} Memory;

void loadInitialData();

#endif //ACA_TERMPROJECT_MEMORY_H
