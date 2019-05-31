#include <stdio.h>
#include "Address/Address.h"
#include "Memory/Memory.h"
#include "Processor/Processor.h"

//
// Created by Krishna Teja Ayinala on 2019-05-27.
//

 int main(){
    printf("Implementation starts from here");
//    int k = _convertAddressToBinary(2048);
     create_memory();

    Processor processor = Invoke_Processor();
    processor.startProcessor();

     printf("\n In Processor");

     format_address(2048, 17, 6, 6, 5);



    //Initiate Memory
    //Initiate L1-Controller cache
    //Initiate L2 cache
    //Initiate processor
    return 0;
}

