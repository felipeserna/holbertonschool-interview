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
 * @tmp: work array to hold information during merge
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
 * merge_worker - merge two arrays
 * @array: array to merge
 * @size: number of elements in the array to merge
 * @middle: Middle index
 * @tmp: work array to hold information during merge
 * Return: nothing
 */
void merge_worker(int *array, int size, int middle, int *tmp)
{
	int left = 0;
	int right = middle;
	int index = 0;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array, middle);
	printf("[right]: ");
	print_array(array + middle, size - middle);
	while (index < size)
	{

		if (right == size)
		{
			tmp[index] = array[left];
			left++;
		}
		else if (left == middle)
		{
			tmp[index] = array[right];
			right++;
		}
		else if (array[right] < array[left])
		{
			tmp[index] = array[right];
			right++;
		}
		else
		{
			tmp[index] = array[left];
			left++;
		}
		index++;
	}
	for (index = 0; index < size; index++)
	{
		array[index] = tmp[index];
	}
	printf("[Done]: ");
	print_array(tmp, size);
}
