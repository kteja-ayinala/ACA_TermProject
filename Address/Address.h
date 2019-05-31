//
// Created by Krishna Teja Ayinala on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_ADDRESS_H
#define ACA_TERMPROJECT_ADDRESS_H

//binary address
//block address
//tag
//index
//offset

typedef struct AddressBits {
    int Offset;
    int Index;
    char* Tag;
    int Addr;
} Address;

int * _convertAddressToBinary(int Address);

#endif //ACA_TERMPROJECT_ADDRESS_H
