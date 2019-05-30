//
// Created by Krishna Teja Ayinala on 2019-05-28.
//
#ifndef ACA_TERMPROJECT_L1_DATA_H
#define ACA_TERMPROJECT_L1_DATA_H

typedef struct L1Block {
    int valid;
    int dirty;
    char* tag;
    unsigned char data[32];
} l1_block;

extern struct L1Block L1Data[32 * 4];

void initL1Data();

#endif //ACA_TERMPROJECT_L1_DATA_H
