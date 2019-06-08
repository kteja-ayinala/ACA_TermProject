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


//     if (!processor.queueProcessor.isEmpty()) {
//         message = (Message) processor.queueProcessor.dequeue();
//         processor.queuePToL1C.enqueue(message);
//         System.out.println("Processor: Message sent from Processor to L1 Controller: " + message.getOriginalMessage());
//     }
//     if (!processor.queuePToL1C.isEmpty()) {
//         message = (Message) processor.queuePToL1C.dequeue();
//         L1C.queuePToL1C.enqueue(message);
//         System.out.println("L1Controller: Message sent from Processor is received at L1 Controller: " + message.getOriginalMessage());
//     }

     int counter = 0;
     Instruction ins;
//     display(&processor.processorQueue);
     do{
         printf("\n-------------------------");
         printf("%d", counter);
         counter++;
         if(processor.processorQueue.length!=0){
              ins = dequeue(&processor.processorQueue);
             enqueue(&processor.queuePTOL1C, &ins);
             printf("\nProcessor: Message sent from Processor to L1 Controller:%d ", ins.address.Addr);
         }
         if(processor.queuePTOL1C.length!=0){
              ins = dequeue(&processor.queuePTOL1C);
             enqueue(&l1Controller.queuePTOL1C, &ins);
             printf("\nL1Controller: Message sent from Processor is received at L1 Controller:%d " , ins.address.Addr);
         }
//         processor->processorQueue.enqueue(&processor->processorQueue, &instruction);

     }while(processor.processorQueue.length!=0  );

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

