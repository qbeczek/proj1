#ifndef file_manager_h
#define file_manager_h

#include<stdio.h>
#include<stdlib.h>

typedef FILE* file;

file open_file(char[]);
void read_file(file);
void save_to_file(file, char[], int);
void close_file(file);

#endif