#include "sort.h"
/**
* radix_sort - sorts an array of integers in ascending order
* using the LSD Radix sort algorithm.
* @array: array of integers >= 0 to be sorted
* @size: number of elements in the array
* Return: Nothing
*/
void radix_sort(int *array, size_t size)
{
	int bucket[10][10], bucket_cnt[10];
	int i, j, k, r, NOP = 0, divisor = 1, lar, pass;

	lar = get_max(array, (int)size);

	while (lar > 0)
	{
		NOP++;
		lar /= 10;
	}

	for (pass = 0; pass < NOP; pass++)
	{
		for (i = 0; i < 10; i++)
		{
			bucket_cnt[i] = 0;
		}

		for (i = 0; i < (int)size; i++)
		{
			r = (array[i] / divisor) % 10;
			bucket[r][bucket_cnt[r]] = array[i];
			bucket_cnt[r] += 1;
		}

		i = 0;
		for (k = 0; k < 10; k++)
		{
			for (j = 0; j < bucket_cnt[k]; j++)
			{
				array[i] = bucket[k][j];
				i++;
			}
		}

		divisor *= 10;
	}
}
/**
* get_max - get maximum number
* @array: array
* @size: size
* Return: integer number
*/
int get_max(int *array, size_t size)
{
	int max = array[0];

	for (int i = 1; i < (int)size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	return (max);
}
