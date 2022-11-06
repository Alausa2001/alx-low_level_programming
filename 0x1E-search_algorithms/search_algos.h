#ifndef __SEARCH_ALGOS__
#define __SEARCH_ALGOS__

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
void print(int *array, size_t start, size_t finish);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int binarysearch(int *array, size_t low, size_t high, int value);
size_t min(size_t a, size_t b);
int advanced_binary(int *array, size_t size, int value);
#endif
