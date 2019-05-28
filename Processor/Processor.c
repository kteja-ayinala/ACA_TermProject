//
// Created by Krishna Teja Ayinala & Sindhura Bonthu on 2019-05-28.
//
#include<Processor.h>
#include<stdio.h>

void run_processor(Processor* processor)
{
    FILE * f = fopen("input.txt", "r"); //take input file
    while(!feof(f))
    {
        if(strcmp(instruction, "CPURead")) //check if the instruction is Read instruction
        {
            fscanf(f, "%d", &address);
            rw = 0;
            char* addressBitString = convertAddressToBinary(address);
            //
        }
        else if(strcmp(instruction, "CPUWrite")) // check if the instruction is Write
        {
            fscanf(f, "%d %[^\n]", &address, &value);
            rw = 1;
            char* addressBitString = convertAddressToBinary(address);
            //
        }

        if(rw==0)
        {

        }
    }
}

// a)Read input file
// b)Queue instructions