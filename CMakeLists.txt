cmake_minimum_required(VERSION 3.14)
project(ACA_TermProject C)

set(CMAKE_C_STANDARD 99)

add_executable(ACA_TermProject main.c Queue/Queue.h Queue/Queue.c Address/Address.h Address/Address.c Bus-Transfer/Bus-Transfer.h Bus-Transfer/Bus-Transfer.c
        Memory/Memory.h Memory/Memory.c L1-Controller/L1-Controller.h L1-Controller/L1-Controller.c L1-Data/L1-Data.h L1-Data/L1-Data.c
        L2-Controller/L2-Controller.h L2-Controller/L2-Controller.c L2-Data/L2-Data.h L2-Data/L2-Data.c Processor/Processor.h Processor/Processor.c Set/Set.h Set/Set.c Cache-Line/CacheLine.h
        Cache-Line/CacheLine.c Block/Block.h Block/Block.c )