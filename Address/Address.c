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



int convertFromBinary(char *bitString){
    char* end;
    int value = strtol(bitString,&end,2);
    return value;
}

char* GetChar(char originalString[],int start,int length,char* substring){
    memcpy( substring, &originalString[start], length );
    substring[length] = '\0';
    return substring;
}

//char* convertToBinary(int a, char *buffer, int buf_size) {
//    buffer += (buf_size - 1);
//
//    for (int i = 31; i >= 0; i--) {
//        *buffer-- = (a & 1) + '0';
//
//        a >>= 1;
//    }
//    return buffer;
//}



char *convertToBinary(int n) {
    int nbits = 17;
    char *s = malloc(nbits+1);
    s[nbits] = '\0';
    unsigned int u = *(unsigned int*)&n;
    int i;
    unsigned int mask = 1 << (nbits-1);
    for (i = 0; i < nbits; i++, mask >>= 1)
        s[i] = ((u & mask) != 0) + '0';
    return s;
}

void substring(char s[], char sub[], int p, int l) {
    int c = 0;

    while (c < l) {
        sub[c] = s[p+c-1];
        c++;
    }
    sub[c] = '\0';
}

//char* format_address(int address, int blockSize, int tagLength, int indexLength, int offsetLength){
//    char str_binary_address[200];
//    char sub[1000];
//
//    char binary_address[BUF_SIZE];
//    binary_address[BUF_SIZE - 1] = '\0';
//    convertToBinary(address, binary_address, BUF_SIZE - 1);
//
//    char str[80];
//    sprintf(str, "%17s", binary_address);
//
//    printf("\n Address  (17 bits)  = %s", str);
//    return str;
//
//
//}

Address Invoke_Address(char *binaryAddress){
    char* output = malloc(7);
    GetChar(binaryAddress,0,6,output);
    char* TagString = output;
//    printf("\ntag %s", TagString);
    output = malloc(7);
    GetChar(binaryAddress,6,6,output);
    char* IndexString = output;
//    printf("Index %s", IndexString);
    output = malloc(6);
    GetChar(binaryAddress,12,5,output);
    char* OffsetString = output;
//    printf("Index %s", OffsetString);
    int Tag = convertFromBinary(TagString);
    int Index = convertFromBinary(IndexString);
    int Offset = convertFromBinary(OffsetString);
    int Addr = convertFromBinary(binaryAddress);
//    printf("\ntag %d", Tag);
//    printf("Index %d", Index);
//    printf("Offset %d", Offset);
//    printf("addr %d", Addr);
    Address address = {Tag:Tag, Index:Index, Offset:Offset, Addr:Addr};
    return address;
}






