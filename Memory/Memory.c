//
// Created by Sindhura & Krishna Teja on 2019-05-30.
//

#include "Memory.h"

#include <stdio.h>
#include <string.h>
#include<stdbool.h>

struct CacheBlock {
    char tag[100];
    char offset[100];
    int cacheBlockAddress;
    char eachCellData[100];
    bool validBit;
    bool dirtyBit;
};
struct CacheBlock cache[10];

void cacheBlockInit(int position, char blockData[100]){
    cache[position].tag[0] = '0';
    cache[position].offset[0] = '0';
    cache[position].validBit = true;
    cache[position].dirtyBit= false;
    cache[position].cacheBlockAddress = 10;
    memcpy(cache[position].eachCellData, blockData, sizeof cache[position].eachCellData);
}

void create_memory(){
    int tagLength = 0, indexLength = 12, offsetLength = 5, blockCount = 4, blockSize = 32, cpuAddress = 17;

    for (int i = 0; i < blockCount; i++){
        char blockData[blockSize];
        for (int j = 0;j < blockSize;j++){
            blockData[j] = (char) (65 + (j%26));
        }
        cacheBlockInit(i, blockData);
        cache[i].validBit = false;
    }

    printf("\n Memory Created");
}

