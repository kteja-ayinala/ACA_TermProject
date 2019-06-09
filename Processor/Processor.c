//
// Created by Krishna Teja Ayinala & Sindhura Bonthu on 2019-05-28.
//

#include "../Address/Address.h"
#include "Processor.h"
#include<stdio.h>
#include <stdbool.h>
#include<string.h>
#include "../Queue/Queue.h"
#include "../L1-Controller/L1-Controller.h"
#include "../L2-Controller/L2-Controller.h"

//Queue processorQueue;
//L1Controller *l1Controller, L2Controller *l2Controller
Processor Invoke_Processor(){
    Processor processor = {};
//    processor.l1Controller = *l1Controller;
//    processor.l2Controller = *l2Controller;
    processor.startProcessor = &startProcessor;
    processor.processorQueue  = Invoke_Queue();
    processor.queuePTOL1C  = Invoke_Queue();
    return processor;
}

void startProcessor(Processor *processor)
{
    // a)Read input file
    FILE *f = fopen("/Users/krishnatejaayinala/CLionProjects/ACA-TermProject/Processor/input.txt", "r"); //take input file
int counter = 0;
    while (!feof(f)) {

        Address addr;
        Instruction ins;
        int readLength;
        unsigned address; // CPU address
        int rw; //0 for CPU read and 1 for write
        char instruction[100]; //CPU instruction
        int value; // for write operation
        fscanf(f, "%s", instruction);
//        printf("\nInstruction %s", instruction);
        if (!(strcmp(instruction, "CPURead"))) //check if the instruction is Read instruction
        {
            printf("\n CPURead");
            fscanf(f, "%d %d", &address, &readLength);
            rw = 0;
            char* binaryAddress = convertToBinary(address);
//            printf("\n convertToBinary check:%s", binaryAddress);
            addr = Invoke_Address(binaryAddress);
            ins= Invoke_Instruction(counter++,rw,NULL,addr,readLength, binaryAddress);
            enqueue(&processor->processorQueue, &ins);



            // b)Queue instructions
        } else if (!(strcmp(instruction, "CPUWrite"))) // check if the instruction is Write
        {
            printf("\n CPUWrite");
            fscanf(f, "%d %d", &address, &value);
            rw = 1;
            char* binaryAddress = convertToBinary(address);
            addr = Invoke_Address(binaryAddress);
            ins= Invoke_Instruction(counter++,rw,value,addr,NULL, binaryAddress);
            enqueue(&processor->processorQueue, &ins);

            // b)Queue instructions

        }
    }
//    int cycle = 0;
//
////     display(&processor.processorQueue);
//
//    do {
//        printf("\n-------------------------");
//        printf("%d", counter);
//        counter++;
//        if (processor->processorQueue.length != 0) {
//            Instruction ins = dequeue(&processor->processorQueue);
//            enqueue(&processor->queuePTOL1C, &ins);
//
////             enqueue(&processor.queuePTOL1C,&ins);
////             enqueue(&(processor).queuePTOL1C, &ins);
//            printf("\nProcessor: Message sent from Processor to L1 Controller:%d ", ins.address.Addr);
//        }
//        if (processor->queuePTOL1C.length != 0) {
//            Instruction ins = dequeue(&processor->queuePTOL1C);
//            enqueue(&processor->l1Controller.queuePTOL1C, &ins);
//            printf("\nL1Controller: Message sent from Processor is received at L1 Controller:%d ",ins.address.Addr);
//        }
////         processor->processorQueue.enqueue(&processor->processorQueue, &instruction);
//
//    } while (processor->processorQueue.length != 0);
}




