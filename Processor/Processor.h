//
// Created by Krishna Teja Ayinala & Sindhura Bonthu on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_PROCESSOR_H
#define ACA_TERMPROJECT_PROCESSOR_H

//typedef struct InstructionProcessor{
//    unsigned address: 18; // CPU address
//    unsigned rw: 1; //0 for CPU read and 1 for write
//    char instruction[100]; //CPU instruction
//    char value; // for write operation
//}Processor;

typedef struct Processor_Struct{
    void (*startProcessor)();
} Processor;

Processor Invoke_Processor();


void startProcessor(Processor *processor);

#endif //ACA_TERMPROJECT_PROCESSOR_H
