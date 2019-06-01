#include <stdio.h>
#include "Address/Address.h"
#include "Queue/Queue.h"
#include "Processor/Processor.h"
#include "Memory/Memory.h"


//
// Created by Krishna Teja Ayinala on 2019-05-27.
//

 int main(){
    printf("Implementation starts from here");
     create_memory();     //Initiate Memory
    Processor processor = Invoke_Processor();       //Initiate processor
    processor.startProcessor();
//    enqueue("CPURead 4");
//    enqueue("CPURead 5");
//    enqueue("CPURead 6");
//    dequeue();
    printf("\n");
    display();
//    format_address(2048, 17, 6, 6, 5);
    //Initiate L1-Controller cache
    //Initiate L2 cache
    return 0;
}

