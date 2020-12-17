#include "lists.h"
/**
* insert_node - inserts a number into a sorted singly linked list
* @head: head of the list
* @number: number of the new node
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = NULL;
	listint_t *current = NULL;

	current = *head;

	/* creating the new node */
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = number;
	new_node->next = NULL;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	/* node at the beginning */
	if (number < current->n)
	{
		new_node->next = (*head);
		*head = new_node;
		return (new_node);
	}

	/* node at the middle or end */
	while (current->next && (current->next->n < number))
		current = current->next;

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
