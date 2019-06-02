//
// Created by Sindhura on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_QUEUE_H
#define ACA_TERMPROJECT_QUEUE_H


#include "stdbool.h"
#include "../Address/Address.h"


typedef struct Queue_Struct
{
    int capacity;
    int current_size;
    int q_start_index;
    int q_end_index;
}Queue;

typedef struct Instruction_Struct{
    int cc;
    int instruction;
    char* data;
    Address address;
    int readLength;
} Instruction;

Instruction Invoke_Instruction(int instructionNumber, Address address, char* data, int readLength);


typedef struct link_Struct {
    Instruction data;
    struct link_Struct *prev;
} Link;

Link Invoke_Link(Instruction instruction);


bool queueEmpty(); //queue size Status
bool checkForOverflow(); //queue size Status

int findSize();    //queue size

//void enqueue(Link *link);  //enqueue
void enqueue(Instruction instruction);
Instruction dequeue(); //dequeue
void display(); // view queue elements
//state info
#endif //ACA_TERMPROJECT_QUEUE_H


