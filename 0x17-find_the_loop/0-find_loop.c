#include "lists.h"
/**
* loop_start - finds where the loop starts
* @head: pointer at head of the singly linked list
* @hare: pointer where hare met tortoise
* Return: The address of the node where the loop starts
*/
listint_t *loop_start(listint_t *head, listint_t *hare)
{
	while (head != hare)
	{
		/* move both pointers one node at a time */
		hare = hare->next;
		head = head->next;
	}
	/* start of the loop */
	return (hare);
}
/**
* find_listint_loop - finds if a singly linked list has a loop,
* and the start of that loop.
* @head: head of the linked list.
* Return: The address of the node where the loop starts,
* or NULL if there is no loop.
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare, *tortoise;

	if (!head)
		return (NULL);

	tortoise = head;
	hare = head;

	while (hare != NULL && tortoise != NULL && hare->next)
	{
		/* The hare is twice as fast as the tortoise */
		tortoise = tortoise->next;
		hare = hare->next->next;

		/* hare met tortoise */
		if (hare == tortoise)
			/* move tortoise to head node */
			return (loop_start(head, hare));
	}
	/* Hare reached the tail of the linked list(NULL) */
	return (NULL);
}
