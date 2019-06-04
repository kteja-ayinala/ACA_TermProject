//
// Created by Krishna Teja Ayinala on 2019-05-27.
//

#include "L1-Controller.h"
#include "stdio.h"
int l1_Tag ;
int l1_Index;
int l1_Offset;
int l1_BlockCount;
int l1_BlockSize;
int l1_CpuBits;


L1Controller invoke_l1Controller(){
    L1Controller l1Controller = {};
    l1Controller.l1_Read = &l1_Read;
    l1Controller.l1_Write = &l1_Write;
     l1_Tag = 6, l1_Index = 6, l1_Offset = 5, l1_BlockCount = 64, l1_BlockSize = 32, l1_CpuBits =17;
    printf("\n L1C invoked");
    return l1Controller;

}

int l1_Read(Address address){
    printf("l1_Read");
}
void l1_Write(Address address, int value){
    printf("l1_Write");
}

