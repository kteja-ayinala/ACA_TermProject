//
// Created by Krishna Teja Ayinala & Sindhura Bonthu on 2019-05-28.
//

#include "../Address/Address.h"
#include "Processor.h"
#include<stdio.h>
#include <stdbool.h>

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
            unsigned address; // CPU address
            bool rw; //0 for CPU read and 1 for write
            char instruction[100]; //CPU instruction
            char *value; // for write operation
            fscanf(f, "%s", instruction);
            printf("\nInstruction %s", instruction);
            if (strcmp(instruction, "CPURead")) //check if the instruction is Read instruction
            {
                printf("\nreceived CPURead");
                fscanf(f, "%d", &address);
                rw = 0;
//                addr = Invoke_Address(address);

                // b)Queue instructions
            } else if (strcmp(instruction, "CPUWrite")) // check if the instruction is Write
            {
                printf("\nreceived CPUWrite");
                fscanf(f, "%d %[^\n]", &address, &value);
                rw = 1;
//                addr = Invoke_Address(address);
                // b)Queue instructions

            }
            if (rw == 0) {

            }
        }
}


