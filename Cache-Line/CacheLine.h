//
// Created by Krishna Teja Ayinala on 2019-06-04.
//

#ifndef ACA_TERMPROJECT_CACHELINE_H
#define ACA_TERMPROJECT_CACHELINE_H

#include "../Address/Address.h"
#include <stdio.h>
#include "../uthash-master/include/uthash.h"


typedef struct CacheLineTag{
    Address address;
    char* data;
    UT_hash_handle hashTable;
} CacheLine;

CacheLine invoke_CacheLine(Address address,char* data);


#endif //ACA_TERMPROJECT_CACHELINE_H
