//
// Created by Sindhura & Krishna Teja on 2019-05-30.
//

#include "Memory.h"
#include "stdlib.h"
#include <stdio.h>
#include <string.h>
#include<stdbool.h>

#include "Block.h"

//Queue queueMemoryToL2C;


Memory* Invoke_memory(){
    Memory* memory = malloc(sizeof(Memory));
//    Memory memory = { memory_Tag:0,memory_Index: 12, memory_Offset:5, memory_BlockCount:4096, memory_BlockSize:32, memory_CpuBits:17
//                     };


     memory->memory_Tag = 0;
     memory->memory_Offset = 5;
     memory->memory_BlockCount = 4096;
     memory->memory_BlockSize = 32;
     memory->memory_CpuBits = 17;
     memory->memory_Index = 12;
//    memory->memory_BlockCount=4096;
//    memory->memory_BlockSize=32;
//    memory->memory_CpuBits=17;
    memory->queueMemoryToL2C = Invoke_Queue();
    memory->queueL2CToM = Invoke_Queue();


    for (int i = 0; i < 4096; i++){
        char blockData[33];
        for (int j = 0;j < 33;j++){
            blockData[j] = (char) (65 + (j%26));
        }

        memory->MemoryBlock[i] = invoke_BlockWithData(blockData);

//        memory->MemoryBlock[i].validBit = 0;
    }
    printf("\n Memory Created");
    return memory;
}


//void create_memory(Memory *memory){
////    Block MemoryBlock[4096];
//    for (int i = 0; i < 4096; i++){
//        char blockData[32];
//        for (int j = 0;j < 32;j++){
//            blockData[j] = (char) (65 + (j%26));
//        }
//
//        memory->MemoryBlock[i] = invoke_BlockWithData(blockData);
//
////        memory->MemoryBlock[i].validBit = 0;
//    }
//    printf("\n Memory Created");
//}

