#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/* main functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif
