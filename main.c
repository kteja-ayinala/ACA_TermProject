#include <stdio.h>
#include "Address/Address.h"
#include "Queue/Queue.h"
#include "Processor/Processor.h"
#include "Memory/Memory.h"
#include "L1-Controller/L1-Controller.h"
#include "L2-Controller/L2-Controller.h"
#include "L1-Data/L1-Data.h"
#include "L2-Data/L2-Data.h"



//
// Created by Krishna Teja Ayinala on 2019-05-27.
//

 int main(){
    printf("Implementation starts from here");
     Invoke_memory();     //Initiate Memory
     Processor processor = invoke_Processor();       //Initiate processor
     processor.startProcessor(&processor);
     L1Controller l1Controller = invoke_l1Controller();
     L1Data l1Data= invoke_L1Data();
     L2Controller l2Controller = invoke_l2Controller();
     L2Data l2Data= invoke_L2Data();

     int counter = 0;

     do{
         counter++;
         if(processor.processorQueue.length!=0){
             Instruction k = processor.processorQueue.dequeue(&processor.processorQueue);
             processor.processorQueue.display(&processor.processorQueue);
             printf("I am In " );
         }
//         processor->processorQueue.enqueue(&processor->processorQueue, &instruction);

     }while(counter<3);

//     Instruction k = dequeue();
//     l1Controller.l1_Read(k.address);



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

