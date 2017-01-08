#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a node at an index
  * @head: double pointer to a linked list
  * @idx: where to add the node
  * @n: value of the node
  * Return: pointer to the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp = *head;
	if (!tmp)
	{
		new->prev = NULL;
		new->next = NULL;
		tmp = new;
		return (tmp);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = tmp;
		*head = new;
		return (*head);
	}
	for ( ; idx > 1 && tmp->next; idx--)
		tmp = tmp->next;
	new->prev = tmp;
	new->next = tmp->next ? tmp->next : NULL;
	tmp->next = tmp->next && idx > 1 ? NULL : new;
	return (new);
}