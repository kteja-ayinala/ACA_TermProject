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


typedef struct Address {
    int Offset;
    int Index;
    int Tag;
    int Addr;
} Address;

int convertAddressToBinary(Address);
Address conAddress(char* bitString);

#endif //ACA_TERMPROJECT_ADDRESS_H
