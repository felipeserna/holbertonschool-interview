#include <stdio.h>
#include <stdlib.h>
#include "search.h"
/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: head list pointer
 * @value: value to search
 *
 * Return: pointer to the value or NULL
**/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *right, *left;

if (!list)
return (NULL);
right = list->express;
left = list;
while (right)
{
	printf("Value checked at index [%lu] = [%d]\n", right->index, right->n);
if (right->n >= value || !right->express) /* right value check */
{
	if (!right->express && right->n < value) /* value within last interval */
	{
		left = right;
		while (right->next) /* find list's end */
			right = right->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       left->index, right->index);
	while (left) /* move one by one within the interval */
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       left->index, left->n);
		if (left->n == value) /* check for value */
			return (left);

		if (left->n > value) /* value not found */
			return (NULL);

		left = left->next;
	}
	break;
}
/* skip */
left = right;
right = right->express;
}
return (NULL);
}
