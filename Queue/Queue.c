//
// Created by Sindhura & Krishna Teja on 2019-05-28.
//

#include<stdio.h>
#include<stdbool.h>
#include "Queue.h"
#include "../Address/Address.h"

#define MAXSIZE 64
Instruction queue[MAXSIZE];
int length = 0;
int q_start_index = -1;
int q_end_index = -1;


Queue Invoke_Queue(){
    Queue queue = {capacity: 100, current_size:0, q_start_index:-1, queue.q_end_index = -1};
    queue.enqueue = &enqueue;
    queue.dequeue = &dequeue;
    queue.display = &display;
    queue.queueEmpty = &queueEmpty;
    queue.findSize = &findSize;
    return queue;
}

//function to check if queue is empty
bool queueEmpty(){
    return q_start_index == -1 ;
}
//function to check if queue is full
bool checkForOverflow(){
    return q_start_index == 0  && q_end_index == MAXSIZE -1;
}

//function to get length of queue
int findSize(){
    return length;
}

//function to add element to a queue
void enqueue(Instruction instruction){
//void enqueue(Link *link){
    if(!checkForOverflow()){
        if(q_start_index == -1)
            q_start_index = 0;
        q_end_index = q_end_index + 1;
        queue[q_end_index] = instruction;
        length++;
    }
}




//function to remove an element from queue
Instruction dequeue() {
//    Link *link;
Instruction instruction;
    if (!queueEmpty) {
        Instruction emptyInstruction = {data:NULL};
        printf("Queue empty\n");
        return emptyInstruction;
    } else {
        instruction = queue[q_start_index];
        if (q_start_index == q_end_index) {
            q_start_index = -1;
            q_end_index = -1;
        }
//        printf("\n dequeued element is : %d\n", queue[q_start_index]);
        q_start_index += 1;
        length--;
        return instruction;
    }
}
//function to display elements in the queue
    void display()
    {
        int i;
        if (q_start_index == - 1)
            printf("Queue is empty \n");
        else
        {
//            printf("Queue is : \n");
            for (i = q_start_index; i <= q_end_index; i++)
                printf("%d ", queue[i]);
            printf("\n");
        }
    }


Instruction Invoke_Instruction(int instructionType, Address address, char* data,int readLength){
    Instruction instruction = {instruction:instructionType, address:address, data:data, readLength:readLength };
    return instruction;
}

Link Invoke_Link(Instruction instruction){
    Link link = {data:instruction};
    return link;
}
