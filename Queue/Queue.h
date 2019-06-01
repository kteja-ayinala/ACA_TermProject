//
// Created by Sindhura on 2019-05-28.
//

#ifndef ACA_TERMPROJECT_QUEUE_H
#define ACA_TERMPROJECT_QUEUE_H


#include "stdbool.h"
typedef struct Queue_Struct
{
    int capacity;
    int current_size;
    int q_start_index;
    int q_end_index;
}Queue;

bool queueEmpty(); //queue size Status
bool checkForOverflow(); //queue size Status

int findSize();    //queue size

void enqueue(int element);  //enqueue
void dequeue(); //dequeue
void display(); // view queue elements



//state info
#endif //ACA_TERMPROJECT_QUEUE_H


