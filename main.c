#include <stdio.h>
#include "Address/Address.h"
#include "Queue/Queue.h"
#include "Processor/Processor.h"
#include "Memory/Memory.h"
#include "L1-Controller/L1-Controller.h"
#include "L2-Controller/L2-Controller.h"


//
// Created by Krishna Teja Ayinala on 2019-05-27.
//

 int main(){
    printf("Implementation starts from here");
     create_memory();     //Initiate Memory
     L1Controller l1Controller = invoke_l1Controller();
     L2Controller l2Controller = invoke_l2Controller();
    Processor processor = invoke_Processor();       //Initiate processor
    processor.startProcessor();

     Instruction k = dequeue();
     l1Controller.l1_Read(k.address);



//    enqueue("CPURead 4");
//    enqueue("CPURead 5");
//    enqueue("CPURead 6");

//    printf("\n");
//    display();
//    for(int i =0 ; i < findSize(); i++){
//
//    }


//    format_address(2048, 17, 6, 6, 5);
    //Initiate L1-Controller cache
    //Initiate L2 cache
    return 0;
}

