#include "lists.h"
/**
* is_palindrome - checks if a singly linked list is a palindrome
* @head: pointer to head of list
* Return: 0 if it is not a palindrome, 1 if it is a palindrome
*/
int is_palindrome(listint_t **head)
{
	listint_t *tmp = *head;
	int pali[3056];
	int i = 0, j;

	if (!head || !(*head))
		return (1);

	while (tmp)
	{
		pali[i] = tmp->n;
		i++;
		tmp = tmp->next;
	}
	i--;
	for (j = 0; j <= i ; i--, j++)
	{
		if (pali[i] != pali[j])
			return (0);
	}
	return (1);
}
