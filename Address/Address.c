//
// Created by Krishna Teja Ayinala & Sindhura on 2019-05-28.
//

#include "Address.h"
#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

#define BUF_SIZE 18

//int * _convertAddressToBinary(int addr) {
//    int n = addr;
//    int bits = 17;
//    int  i;
//    int * a = malloc(bits);
//    for (i = 0; n>0; i++) {
//        a[i] = n % 2;
//        n = n / 2;
//    }
//    for (i = i - 1; i >= 0; i--) {
//        printf("%d", a[i]);
//    }
//    return a;
//}



int fromBinary(char* bitString){
    char* end;
    int value = strtol(bitString,&end,2);
    return value;
}

char* GetChar(char originalString[],int start,int length,char* substring){
    memcpy( substring, &originalString[start], length );
    substring[length] = '\0';
    return substring;
}

char* int2bin(int a, char *buffer, int buf_size) {
    buffer += (buf_size - 1);

    for (int i = 31; i >= 0; i--) {
        *buffer-- = (a & 1) + '0';

        a >>= 1;
    }
    return buffer;
}

void substring(char s[], char sub[], int p, int l) {
    int c = 0;

    while (c < l) {
        sub[c] = s[p+c-1];
        c++;
    }
    sub[c] = '\0';
}

void format_address(int address, int blockSize, int tagLength, int indexLength, int offsetLength){
    char str_binary_address[200];
    char sub[1000];

    char binary_address[BUF_SIZE];
    binary_address[BUF_SIZE - 1] = '\0';
    int2bin(address, binary_address, BUF_SIZE - 1);

    char str[80];
    sprintf(str, "%17s", binary_address);

    printf("\n Address  (17 bits)  = %s", str);


}

Address Invoke_Address(char *bitString){
    char* output = malloc(9);
    GetChar(bitString,0,8,output);
    char* TagString = output;
    output = malloc(7);
    GetChar(bitString,8,6,output);
    char* IndexString = output;
    output = malloc(4);
    GetChar(bitString,14,3,output);
    char* OffsetString = output;
    int Tag = fromBinary(TagString);
    int Index = fromBinary(IndexString);
    int Offset = fromBinary(OffsetString);
    int bitStringValue = fromBinary(bitString);
    Address address = {Tag:Tag,Index:Index,Offset:Offset};
    return address;
}






