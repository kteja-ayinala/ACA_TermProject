//
// Created by Sindhura on 2019-05-28.
//

#include<stdio.h>
#include<stdbool.h>

#define MAX 100
int queue[MAX];
int length = 0;
int front = -1;
int rear = -1;

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
        if(rear == MAX-1){
            rear = -1;
        }
        queue[++rear] = element;
        length++;
    }
}
//function to remove an element from queue
int dequeue(){
    int element = queue[front++];
    if(front==MAX)
    {
        front = 0;
    }
    length--;
    return  element;
}
