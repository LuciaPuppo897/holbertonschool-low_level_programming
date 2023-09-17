 #ifndef _SEARCHALGOS_
#define _SEARCHALGOS_


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void quick_sort(int *array, size_t size);
void recursive_quick(int *array, int min, int max, size_t size)
