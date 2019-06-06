//
// Created by Sindhura & Krishna Teja on 2019-05-30.
//

#include "Memory.h"

#include <stdio.h>
#include <string.h>
#include<stdbool.h>

Queue queueMemoryToL2C;

struct CacheBlock {
    char tag[100];
    char offset[100];
    int cacheBlockAddress;
    char eachCellData[100];
    bool validBit;
    bool dirtyBit;
};
struct CacheBlock cache[4096];

void cacheBlockInit(int position, char blockData[100]){
    cache[position].tag[0] = '0';
    cache[position].offset[0] = '0';
    cache[position].validBit = true;
    cache[position].dirtyBit= false;
    cache[position].cacheBlockAddress = 10;
    memcpy(cache[position].eachCellData, blockData, sizeof cache[position].eachCellData);
}

void create_memory(){
    int memory_Tag = 0, memory_Index = 12, memory_Offset = 5, memory_BlockCount = 4096, memory_BlockSize = 32, memory_CpuBits =17;
    queueMemoryToL2C = Invoke_Queue();
    for (int i = 0; i < memory_BlockCount; i++){
        char blockData[memory_BlockSize];
        for (int j = 0;j < memory_BlockSize;j++){
            blockData[j] = (char) (65 + (j%26));
        }
        cacheBlockInit(i, blockData);
        cache[i].validBit = false;
//        printf("%s",blockData);
    }

    printf("\n Memory Created");
}

