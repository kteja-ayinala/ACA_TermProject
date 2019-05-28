//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_L2_DATA_H
#define ACA_TERMPROJECT_L2_DATA_H

typedef struct L2Block
{
    int valid;
    int dirty;
    unsigned char data[32];
    int tag;
} l2_block;

extern struct L2Block L2Data[32*4*2];

void initL2Data();

#endif //ACA_TERMPROJECT_L2_DATA_H
