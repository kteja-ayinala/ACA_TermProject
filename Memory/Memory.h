//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_MEMORY_H
#define ACA_TERMPROJECT_MEMORY_H

#include "../Queue/Queue.h"
#include "../Block/Block.h"

typedef struct Memory_Struct {
    int memory_Tag;
    int memory_Index;
    int memory_Offset;
    int memory_CpuBits;
    int memory_BlockCount;
    int memory_BlockSize;
    Queue queueToMemory;
    Queue queueFromMemory;
    Block memoryBlock;
    Queue queueMemoryToL2C;
} Memory;

void Invoke_memory();

#endif //ACA_TERMPROJECT_MEMORY_H
