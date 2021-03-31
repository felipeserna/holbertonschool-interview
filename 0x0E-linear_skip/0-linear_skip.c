#include "search.h"
/**
* linear_skip - Searches for a value in a sorted skip
* list of integers.
* @list: is a pointer to the head of the skip list to search in
* @value: is the value to search for
* Return: a pointer on the first node where value is located, otherwise NULL
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node;

	if (!list)
		return (NULL);

	node = list->express;
	printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);

	while (node && node->n < value)
	{
		list = node;
		node = node->express;
		if (!node)
		{
			node = list;
			while (node->next)
				node = node->next;
			break;
		}
		printf("Value checked at index [%lu] = [%d]\n",	node->index, node->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", list->index,
			node->index);

	for (; list && node->n >= list->n; list = list->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);

		if (list->n == value)
			return (list);
	}
	return (NULL);
}
