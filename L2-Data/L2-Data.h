//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_L2_DATA_H
#define ACA_TERMPROJECT_L2_DATA_H

typedef struct L2Block
{
    int valid;
    int dirty;
    char * tag;
    unsigned char data[32];
} l2_block;

extern struct L2Block L2Data[32*4*2];

void initL2Data();

#endif //ACA_TERMPROJECT_L2_DATA_H
