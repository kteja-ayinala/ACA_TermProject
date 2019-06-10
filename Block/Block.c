//
// Created by Krishna Teja Ayinala on 2019-05-30.
//

#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "Block.h"
#include "../Address/Address.h"

#include<stdbool.h>

//int validBit;
//int dirtyBit;
//int tag;
//int offset;
//Address address;
//char data[];

Block invoke_Block(){
Block block = { validBit:1, dirtyBit:0,  tag:0, offset:0};
    return block;
}

//Block invoke_BlockWithData(char blockData[]){
//    Block block = {validBit:1, dirtyBit:0,  tag:0, offset:0};
//    strcpy(block.data, blockData);
////    memcpy(&block.data, &blockData, sizeof blockData);
//    return block;
//}

Block* invoke_BlockWithData(char block_data[]){
    Block* block1 = malloc(sizeof(Block));
    block1 ->validBit = 1;
    block1 -> dirtyBit = 0;
    block1 -> tag = 0;
    block1 -> offset = 0;
    strcpy(block1 -> data, block_data);
    return block1;

}


Block invoke_CacheBlockMem(char mdata[], int index, int counter){
    Block block ={validBit:1,  tag:0, offset:0, data:32};
    int count =0;
    bool flag = false;
    for (int i = 0; i < 8; i++) {
        int location = index + count;
        for (int j = 0; j < 4; j++) {
            block.data[count] = mdata[count];
            count++;
        }
        if (flag) {
            printf("-------");
            printf("Cycle Number: %d" + counter);
            counter++;
        } else {
            flag = true;
            counter++;
        }
        printf("Memory: Retrieving data from memory to L2 Data at: %d", location);
    }
    return block;

}




