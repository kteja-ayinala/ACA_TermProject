//
// Created by Krishna Teja Ayinala on 2019-06-04.
//

#include "CacheLine.h"

CacheLine invoke_CacheLine(Address address, char* data){
    CacheLine cacheLine = {address:address, data:data};
    return cacheLine;
}