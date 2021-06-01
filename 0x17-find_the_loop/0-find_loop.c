#include "lists.h"
/**
* loop_start - finds where the loop starts
* @head: pointer equal to hare
* @hare: pointer equal to head
* Return: The address of the node where the loop starts
*/
listint_t *loop_start(listint_t *head, listint_t *hare)
{
	while (head != hare)
	{
		hare = hare->next;
		head = head->next;
	}
	return (hare);
}
/**
* find_listint_loop - finds if a singly linked list has a loop.
* @head: head of the linked list.
* Return: The address of the node where the loop starts,
* or NULL if there is no loop.
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare, *tortoise;

	if (!head)
		return (NULL);

	tortoise = head->next;
	hare = head->next->next;

	while (hare != NULL && tortoise != NULL && hare->next)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;

		if (hare == tortoise)
			return (loop_start(head, hare));
	}
	return (NULL);
}
