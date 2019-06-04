//
// Created by Krishna Teja Ayinala on 2019-05-30.
//

#include "Block.h"
#include "../Address/Address.h"

Block invoke_Block(Address address){
    Block block = {dirtyBit:false, validBit:true, blockCount:0, address:address, isEmpty:false};
    block.IsInBlock = &IsInBlock;
    //HashTable Functions
    block.putCacheLine = &putCacheLine;
    block.replaceCacheLine = &replaceCacheLine;
    block.getCacheLineByOffset = &getCacheLineByOffset;
    block.removeCacheLineFromTable = &removeCacheLineFromTable;
    block.deleteAllCacheLine = &deleteAllCacheLine;
    block.CountCacheLines = &CountCacheLines;
    block.print_cache_lines_in_set = &print_cache_lines_in_set;
    block.HashTable = NULL;
    return block;
}


void setCacheLines(Block block, CacheLine* cacheLines[]){
    block.cacheLines = cacheLines;
}

void blockCounter(Block** block){
    (*block)->blockCount += 1;
}

bool isInBlock(Address address){
    return true;
}

void addCacheLine(CacheLine** HashTable, CacheLine* value) {
    if(value->address == NULL){
        printf("The passed block needs to have attribute address.bitString set");
    }
    HASH_ADD_INT(*HashTable, address.Offset, value );
    //The last parameter is a pointer to the structure being added
}


CacheLine* getCacheLineByOffset(CacheLine** HashTable, int key) {
    CacheLine* hashTableStoresInThisBlock;

    HASH_FIND_INT( *HashTable, &key, hashTableStoresInThisBlock );//find block_id and put into s
    return hashTableStoresInThisBlock;
}

//void replaceCacheLine(UT_hash_handle hh,CacheLine** HashTable,CacheLine *value) {
//    CacheLine *hashTableStoresInThis;//to store getter
//
//    HASH_FIND_INT( *HashTable, &value->address.Offset, hashTableStoresInThis );
//    if (hashTableStoresInThis==NULL) {
//        hashTableStoresInThis = (CacheLine*)malloc(sizeof(CacheLine));
//        hashTableStoresInThis->address.bitString = value->address.bitString;
//        HASH_ADD_INT(*HashTable, address.Offset, value );
//    }
//}

//delete from hashmap
void removeCacheLineFromTable(CacheLine** HashTable,CacheLine* blockToRemove) {
    HASH_DEL( *HashTable, blockToRemove);//removes blocks of type block
}

//Delete all items from hash
void deleteAllCacheLine(CacheLine** HashTable) {
    CacheLine *current_block, *tmp;

    HASH_ITER(hh, *HashTable, current_block, tmp) {
        HASH_DEL(*HashTable,current_block);  /* delete; users advances to next */
        free(current_block);            /* optional- if you want to free  */
    }
}

//count items
int CountCacheLines(CacheLine** HashTable){
    int num_in_hashtable;
    num_in_hashtable = HASH_COUNT(*HashTable);
    return num_in_hashtable;
}

void print_cache_lines_in_set(CacheLine** HashTable) {
    CacheLine* s;
    CacheLine* tmp;
    HASH_ITER(hh,*HashTable,s,tmp){
        printf("address.bitString: %s",s->address.bitString);
    }
}