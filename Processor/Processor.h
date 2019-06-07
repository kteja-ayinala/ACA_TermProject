//
// Created by Krishna Teja Ayinala & Sindhura Bonthu on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_PROCESSOR_H
#define ACA_TERMPROJECT_PROCESSOR_H


#include "../Queue/Queue.h"

typedef struct Processor_Struct{
    void (*startProcessor)(struct Processor *processor);
    Queue processorQueue;;
} Processor;

Processor invoke_Processor();

void startProcessor(Processor *processor);

#endif //ACA_TERMPROJECT_PROCESSOR_H
