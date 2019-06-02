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
    int Tag;
    int Index;
    int Offset;
    int Addr;
} Address;

//int * _convertAddressToBinary(int Address);

Address Invoke_Address(char *bitString);

char* GetChar(char* originalString,int start,int length,char* substring);
int convertFromBinary(char *s);
//char* convertToBinary(int a, char *buffer, int buf_size);
char *convertToBinary(int n);
char* format_address(int address, int blockSize, int tagLength, int indexLength, int offsetLength);
//char *convertToBinary(int n);
#endif //ACA_TERMPROJECT_ADDRESS_H
