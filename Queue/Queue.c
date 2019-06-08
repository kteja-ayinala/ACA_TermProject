//
// Created by Sindhura & Krishna Teja on 2019-05-28.
//

#include<stdio.h>
#include<stdbool.h>
#include "Queue.h"
#include "../Address/Address.h"

#define MAXSIZE 100
//Instruction varray[MAXSIZE];
//int length = 0;
//int q_start_index = -1;
//int q_end_index = -1;


Queue Invoke_Queue(){
    Queue queue = {capacity: 100, current_size:0, length:0, q_start_index:-1, q_end_index:-1};
    queue.enqueue = &enqueue;
    queue.dequeue = &dequeue;
    queue.display = &display;
    queue.queueEmpty = &queueEmpty;
    queue.findSize = &findSize;
    return queue;
}

//function to check if queue is empty
bool queueEmpty(Queue *queue){
    return queue->q_start_index == -1 ;
}
//function to check if queue is full
bool checkForOverflow(Queue *queue){
    return queue->q_start_index == 0  && queue->q_end_index== MAXSIZE -1;
}

//function to get length of queue
int findSize(Queue *queue){
    return queue->length;
}

//function to add element to a queue
void enqueue(Queue *queue, Instruction *instruction){
//void enqueue(Link *link){
    if(!checkForOverflow(&queue)){
        if(queue->q_start_index == -1)
            queue->q_start_index = 0;
        queue->q_end_index = queue->q_end_index + 1;
        queue->varray[queue->q_end_index] = *instruction;
        queue->length++;
    }
}




//function to remove an element from queue
Instruction dequeue(Queue *queue) {
//    Link *link;
Instruction *instruction;
    if (queue->length==0) {
        Instruction emptyInstruction = {data:NULL};
        printf("Queue empty\n");
        return emptyInstruction;
    } else {
        *instruction = queue->varray[queue->q_start_index];
        if (queue->q_start_index == queue->q_end_index) {
            queue->q_start_index = -1;
            queue->q_end_index = -1;
        }
//        printf("\n dequeued element is : %d\n", queue[q_start_index]);
        queue->q_start_index += 1;
        queue->length--;
        return *instruction;
    }
}
//function to display elements in the queue
    void display(Queue *queue)
    {
        int i;
        if ( queue->q_start_index == - 1)
            printf("Queue is empty \n");
        else
        {
            for (i =  queue->q_start_index; i <=  queue->q_end_index; i++)
                printf("%d ", queue->varray[i]);
            printf("\n");
        }
    }


Instruction Invoke_Instruction(int instructionType, Address address, int data,int readLength){
    Instruction instruction = {instruction:instructionType, address:address, data:data, readLength:readLength };
    return instruction;
}

Link Invoke_Link(Instruction instruction){
    Link link = {data:instruction};
    return link;
}
