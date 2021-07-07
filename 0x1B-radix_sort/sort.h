#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/* Given functions */
void print_array(const int *array, size_t size);
void radix_sort(int *array, size_t size);

/* Auxiliary functions */
int get_max(int *array, size_t size);

#endif
