//
// Created by Krishna Teja Ayinala on 2019-05-30.
//

#ifndef ACA_TERMPROJECT_SET_H
#define ACA_TERMPROJECT_SET_H

typedef struct Set-Struct {
    int BlockCount;
    Address addr;
}Set;

void addBlockData();
void removeBlockData();
void clearSet();

bool checkIfExist();

#endif //ACA_TERMPROJECT_SET_H
