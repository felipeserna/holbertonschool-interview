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
	size_t i;
	size_t aux;
	
	if (!array || size < 2)
		return;

	for (i = 0; i < 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			aux = array[i];
			array[i] = array[i+1];
			array[i+1] = aux;
			print_array(array, size);
		}
	}
}
