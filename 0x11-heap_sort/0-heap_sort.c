#include "sort.h"
/**
* heap_sort - sorts an array of integers in ascending order
* using the Heap sort algorithm.
* @array: array of integers
* @size: size of the array
* Return: nothing
*/
void heap_sort(int *array, size_t size)
{
	if (size < 2)
		print_array(array, size);
}
