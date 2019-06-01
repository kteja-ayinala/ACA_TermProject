//
// Created by Sindhura & Krishna Teja on 2019-05-28.
//

#include<stdio.h>
#include<stdbool.h>
#include "Queue.h"
#include "../Address/Address.h"

#define MAXSIZE 64
int queue[MAXSIZE];
int length = 0;
int q_start_index = -1;
int q_end_index = -1;

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
void enqueue(Link *link){
    if(!checkForOverflow()){
        if(q_start_index == -1)
            q_start_index = 0;
        q_end_index = q_end_index + 1;
        queue[q_end_index] = link;
        length++;
    }
}

//function to remove an element from queue
void dequeue() {
    if (!queueEmpty) {
        printf("Queue empty\n");
        return;
    } else {
        int element = queue[q_start_index];
        if (q_start_index == q_end_index) {
            q_start_index = -1;
            q_end_index = -1;
        }
        printf("\n dequeued element is : %d\n", queue[q_start_index]);
        q_start_index += 1;
        length--;
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
