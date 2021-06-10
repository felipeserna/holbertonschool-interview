#include "sort.h"
/**
 * merge_worker - merge sort worker function
 * @array: pointer to the array
 * @size: size of the array
 * @middle: Middle index
 * @temp: pointer to a working array
 * Return: nothing
 */
void merge_worker(int *array, int size, int middle, int *temp)
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
			temp[k] = array[i];
			i++;
		}
		else if (i == middle)
		{
			temp[k] = array[j];
			j++;
		}
		else if (array[j] < array[i])
		{
			temp[k] = array[j];
			j++;
		}
		else
		{
			temp[k] = array[i];
			i++;
		}
	}
	for (i = 0; i < size; i++)
	{
		array[i] = temp[i];
	}
	printf("[Done]: ");
	print_array(temp, size);
}
/**
 * merge_rec - merge sort using recursion
 * @array: pointer to the array
 * @size: size of the array
 * @temp: pointer to a working array
 * Return: nothing
 */
void merge_rec(int *array, size_t size, int *temp)
{
	int middle;

	if (size < 2)
		return;
	middle = size / 2;
	merge_rec(array, middle, temp);
	merge_rec(array + middle, size - middle, temp);
	merge_worker(array, size, middle, temp);
}
/**
* merge_sort - sorts an array of integers in ascending order
* using the Merge Sort algorithm.
* @array: array to be sorted
* @size: number of elements in the array
* Return: nothing
*/
void merge_sort(int *array, size_t size)
{
	int *tmp = NULL;

	if (array == NULL || size < 2)
		return;

	tmp = malloc(size * sizeof(int));

	if (tmp == NULL)
		return;

	merge_rec(array, size, tmp);

	free(tmp);
}
