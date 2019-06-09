//
// Created by Sindhura on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_QUEUE_H
#define ACA_TERMPROJECT_QUEUE_H


#include "stdbool.h"
#include "../Address/Address.h"
#include "Queue.h"




typedef struct Instruction_Struct{
    int instructionNumber;
    int instructionKind;
    int data;
    Address address;
    int readLength;
    char* binaryAddress;
} Instruction;

Instruction Invoke_Instruction(int instructionNumber, int instructionKind, int data, Address address,  int readLength, char* binaryAddress);


typedef struct Queue_Struct
{
    int capacity;
    int current_size;
    int q_start_index;
    int q_end_index;
    int length;
    void (*enqueue)(struct Queue_Struct *queue, Instruction *instruction);
    Instruction (*dequeue)(struct Queue_Struct *queue);
    bool (*queueEmpty)(struct Queue_Struct *queue);
    void (*display)(struct Queue_Struct *queue);
    int (*findSize)(struct Queue_Struct *queue);
    Instruction varray[];
}Queue;

Queue Invoke_Queue();

typedef struct link_Struct {
    Instruction data;
    struct link_Struct *prev;
} Link;

Link Invoke_Link(Instruction instruction);


bool queueEmpty(Queue *queue); //queue size Status
bool checkForOverflow(Queue *queue); //queue size Status

int findSize(Queue *queue);    //queue size

//void enqueue(Link *link);  //enqueue
void enqueue(Queue *queue, Instruction *instruction);
Instruction dequeue(Queue *queue); //dequeue
void display(Queue *queue); // view queue elements

//state info
#endif //ACA_TERMPROJECT_QUEUE_H


