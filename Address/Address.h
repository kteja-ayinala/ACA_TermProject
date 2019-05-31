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
    char* Tag;
    char* Index;
    char* Offset;
    int Addr;
} Address;

//int * _convertAddressToBinary(int Address);

Address Constructor_Address(char* bitString);

char* GetChar(char* originalString,int start,int length,char* substring);
int fromBinary(char *s);
char* int2bin(int a, char *buffer, int buf_size);

#endif //ACA_TERMPROJECT_ADDRESS_H
