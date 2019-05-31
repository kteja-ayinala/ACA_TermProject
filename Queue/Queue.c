//
// Created by Sindhura & Krishna Teja on 2019-05-28.
//

#include<stdio.h>
#include<stdbool.h>

#define MAX 100
int queue[MAX];
int length = 0;
int q_start_index = -1;
int q_end_index = -1;

//function to check if queue is empty
bool queueEmpty(){
    return length =0;
}
//function to check if queue is full
bool isFull(){
    return length=MAX;
}

//function to get length of queue
int getLength(){
    return length;
}

//function to add element to a queue
void enqueue(int element){
    if(!isFull()){
        if(q_end_index == MAX-1){
            q_end_index = -1;
        }
        queue[++q_end_index] = element;
        length++;
    }
}
//function to remove an element from queue
int dequeue(){
    int element = queue[q_start_index++];
    if(q_start_index==MAX)
    {
        q_start_index = 0;
    }
    length--;
    return  element;
}
