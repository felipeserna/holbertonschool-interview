#include "sort.h"
/**
* merge_sort - sorts an array of integers in ascending order
* using the Merge Sort algorithm. Top-down.
* @array: array to be sorted
* @size: number of elements in the array
* Return: nothing
*/
void merge_sort(int *array, size_t size)
{
	int *tmp = NULL;

	if (array == NULL || size <= 1)
		return;

	tmp = malloc(size * sizeof(int));

	if (tmp == NULL)
		return;

	recursion(array, size, tmp);

	free(tmp);
}
/**
 * recursion - merge sort using recursion
 * @array: array to be sorted
 * @size: number of elements in the array
 * @tmp: work array
 * Return: nothing
 */
void recursion(int *array, size_t size, int *tmp)
{
	int middle;

	if (size <= 1)
		return;
	middle = size / 2;
	recursion(array, middle, tmp);
	recursion(array + middle, size - middle, tmp);
	merge_worker(array, size, middle, tmp);
}
/**
 * merge_worker - merge sort worker function
 * @array: array to be sorted
 * @size: number of elements in the array
 * @middle: Middle index
 * @tmp: work array
 * Return: nothing
 */
void merge_worker(int *array, int size, int middle, int *tmp)
{
	int i, j, k;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array, middle);
	printf("[right]: ");
	print_array(array + middle, size - middle);
	for (i = 0, j = middle, k = 0; k < size; k++)
	{

		if (j == size)
		{
			tmp[k] = array[i];
			i++;
		}
		else if (i == middle)
		{
			tmp[k] = array[j];
			j++;
		}
		else if (array[j] < array[i])
		{
			tmp[k] = array[j];
			j++;
		}
		else
		{
			tmp[k] = array[i];
			i++;
		}
	}
	for (i = 0; i < size; i++)
	{
		array[i] = tmp[i];
	}
	printf("[Done]: ");
	print_array(tmp, size);
}
