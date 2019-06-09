//
// Created by Krishna Teja Ayinala & Sindhura Bonthu on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_PROCESSOR_H
#define ACA_TERMPROJECT_PROCESSOR_H



#include "../Queue/Queue.h"
#include "../L1-Controller/L1-Controller.h"
#include "../L2-Controller/L2-Controller.h"


typedef struct Processor_Struct{
    Queue processorQueue;
    Queue queuePTOL1C;
    void (*startProcessor)();
//    L1Controller l1Controller;
//    L2Controller l2Controller;
} Processor;

Processor Invoke_Processor();

void startProcessor(Processor *processor);
//void startProcessor();

#endif //ACA_TERMPROJECT_PROCESSOR_H
