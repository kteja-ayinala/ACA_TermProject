//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

#include "stdio.h"
#include "L2-Controller.h"


L2Controller invoke_l2Controller(){
    L2Controller l2Controller = {};
    l2Controller.l2_Read = &l2_Read;
    l2Controller.l2_Write = &l2_Write;
    printf("\n L2C invoked");
    return l2Controller;

}

int l2_Read(Address address){
    int l2_Tag = 3, l2_Index = 9, l2_Offset = 5, l2_BlockCount = 512, l2_BlockSize = 32, l2_CpuBits =17;
    printf("l2_Read");
}

void l2_Write(Address address, int value){
    int l2_Tag = 3, l2_Index = 9, l2_Offset = 5, l2_BlockCount = 512, l2_BlockSize = 32, l2_CpuBits =17;
    printf("l2_Write");
}

