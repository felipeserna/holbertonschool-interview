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

	int temp = *a;
	*a = *b;
	*b = temp;
	print_array(array, n);
}
/**
 * heapify - organizes the array into max heap
 * @arr: array
 * @n: actual size
 * @i: actual position
 * @size: total size
*/
void heapify(int *arr, int n, int i, size_t size)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && arr[left] > arr[largest])
		largest = left;

	if (right < n && arr[right] > arr[largest])
		largest = right;

	if (largest != i)
	{
		swap(&arr[i], &arr[largest], arr, size);
		heapify(arr, n, largest, size);
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

	if (array == NULL)
		return;

	for (i = size / 2; i > 0; i--)
		heapify(array, size, i - 1, size);

	for (i = size - 1; i > 0; i--)
	{
		swap(&array[0], &array[i], array, size);
		heapify(array, i, 0, size);
	}
}
