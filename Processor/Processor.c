//
// Created by Krishna Teja Ayinala & Sindhura Bonthu on 2019-05-28.
//

#include "../Address/Address.h"
#include "Processor.h"
#include<stdio.h>
#include <stdbool.h>
#include<string.h>
#include "../Queue/Queue.h"

Processor Invoke_Processor(){
    Processor processor = {};
    processor.startProcessor = &startProcessor;
    return processor;
}

void startProcessor(Processor *processor)
{
    // a)Read input file
    FILE *f = fopen("/Users/krishnatejaayinala/CLionProjects/ACA-TermProject/Processor/input.txt", "r"); //take input file

    while (!feof(f)) {
        Address addr;
        int readLength;
        unsigned address; // CPU address
        int rw; //0 for CPU read and 1 for write
        char instruction[100]; //CPU instruction
        char *value; // for write operation
        fscanf(f, "%s", instruction);
        printf("\nInstruction %s", instruction);
        if (!(strcmp(instruction, "CPURead"))) //check if the instruction is Read instruction
        {
            printf("\nreceived CPURead");
            fscanf(f, "%d %d", &address , &readLength);
            rw = 0;
//            int readLength = &readLength;
            char* binaryAddress = convertToBinary(address);
//            printf("\n convertToBinary check:%s", binaryAddress);
            addr = Invoke_Address(binaryAddress);
            Instruction instruction = Invoke_Instruction(rw,addr,NULL,readLength);
            Link link = Invoke_Link(instruction);
            enqueue(&link);
//            display();

//            printf("Result: %d\n", link);

//            fscanf(f, "%d %[^\n]", &address, &value);
//            operation = 1;
//            char* binaryAddress = convertToBinary(address);
//            addressStruct = Constructor_Address(binaryAddress);

            // b)Queue instructions
        } else if (!(strcmp(instruction, "CPUWrite"))) // check if the instruction is Write
        {
            printf("\nreceived CPUWrite");
            fscanf(f, "%d %d", &address, &value);
            rw = 1;
            char* bitString = convertToBinary(address);
            addr = Invoke_Address(bitString);
            Instruction instruction = Invoke_Instruction(rw,addr,&value,NULL);
            Link link = Invoke_Link(instruction);
            enqueue(&link);
//            display();

//            printf("Result: %d\n", value);
            // b)Queue instructions

        }
    }
}




