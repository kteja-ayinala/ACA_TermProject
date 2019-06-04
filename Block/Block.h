//
// Created by Krishna Teja Ayinala on 2019-05-30.
//


//Implement Block structure
#ifndef ACA_TERMPROJECT_BLOCK_H
#define ACA_TERMPROJECT_BLOCK_H

#include "../Address/Address.h"

typedef struct Block_Struct {
    int validBit;
    int dirtyBit;
//    int tag;
//    int offset;
    Address address;
    char * data;


    void (*setCacheLines)(struct BlockTag block, struct CacheLineTag* cacheLines[]);
    bool (*isInBlock)(Address address);

    void (*putCacheLine)(struct CacheLineTag** HashTable, struct CacheLineTag* value);
    struct CacheLineTag* (*getCacheLineByOffset)(struct CacheLineTag** HashTable,int key);
    void (*removeCacheLineFromTable)(struct CacheLineTag** HashTable,struct CacheLineTag* blockToRemove);
    void (*deleteAllCacheLine)(struct CacheLineTag** HashTable);
    int (*CountCacheLines)(struct CacheLineTag** HashTable);
//    void (*replaceCacheLine)(UT_hash_handle hh,struct CacheLineTag** HashTable,struct CacheLineTag* value);
    struct CacheLineTag* (*getCacheLine)(struct CacheLineTag** HashTable,char* key);
    void (*print_cache_lines_in_set)(struct CacheLineTag** HashTable);
}Block;


Block invoke_Block(Address address);
void setCacheLines(Block block,struct CacheLineTag* cacheLines[]);
void blockCounter(Block** block);
bool isInBlock(Address address);


void addCacheLine(struct CacheLineTag** HashTable, struct CacheLineTag* value);
struct CacheLineTag* getCacheLineByOffset(struct CacheLineTag** HashTable,int key);
void removeCacheLineFromTable(struct CacheLineTag** HashTable,struct CacheLineTag* blockToRemove);
void deleteAllCacheLine(struct CacheLineTag** HashTable);
int CountCacheLines(struct CacheLineTag** HashTable);
//void replaceCacheLine(UT_hash_handle hh,struct CacheLineTag** HashTable,struct CacheLineTag* value);
struct CacheLineTag* getCacheLine(struct CacheLineTag** HashTable,char* key);
void display_cacheLines(struct CacheLineTag **HashTable);

#endif //ACA_TERMPROJECT_BLOCK_H



