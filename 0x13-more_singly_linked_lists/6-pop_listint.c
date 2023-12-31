#include "lists.h"

/**
 * pop_listint - Deletes the head node od a linked list
 * @head: Pointer to the first element in the linked list
 *
 * Return: The data inside the elements that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
