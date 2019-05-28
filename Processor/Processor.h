//
// Created by Krishna Teja Ayinala & Sindhura Bonthu on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_PROCESSOR_H
#define ACA_TERMPROJECT_PROCESSOR_H

typedef struct Processor{
    unsigned valid: 1;
    unsigned address: 18;
    unsigned char data[32];
    unsigned rw: 1;
};


#endif //ACA_TERMPROJECT_PROCESSOR_H
