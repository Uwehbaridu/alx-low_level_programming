#ifndef FUNCTION_POINTER.H
#define FUNCTION_POINTER.H

#include <stdio.h>
#include <unistd.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int op_mul(int a, int b);
#endif
