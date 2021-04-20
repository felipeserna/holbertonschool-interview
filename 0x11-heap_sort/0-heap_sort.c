#include "sort.h"
/**
 * swap - Swaps pointers a and b
 * @a: pointer a
 * @b: pointer b
 * @array: array
 * @n: size of array
*/
void swap(int *a, int *b, int *array, size_t n)
{
	int aux = *a;
	*a = *b;
	*b = aux;
	print_array(array, n);
}
/**
 * heapify - organizes the array into max heap
 * @arr: array to heapify
 * @n: size of the array
 * @i: the index to check
 * @size: size in size_t format
*/
void heapify(int *arr, int n, int i, size_t size)
{
	int biggest = i;
	int left_child = 2 * i + 1;
	int right_child = 2 * i + 2;

	if (left_child < n && arr[left_child] > arr[biggest])
		biggest = left_child;

	if (right_child < n && arr[right_child] > arr[biggest])
		biggest = right_child;

	if (biggest != i)
	{
		swap(&arr[i], &arr[biggest], arr, size);
		heapify(arr, n, biggest, size);
	}
}
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

	if (!array)
		return;

	for (i = size / 2; i > 0; i--)
		heapify(array, size, i - 1, size);

	for (i = size - 1; i > 0; i--)
	{
		swap(&array[0], &array[i], array, size);
		heapify(array, i, 0, size);
	}
}
