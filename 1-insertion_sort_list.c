#include "sort.h"
/**
 * insertion_sort_list - function that implies insertion sort
 * @list: input list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
/**
 * swap - fun that swaps two nodes in a list
 * @n1: is n1
 * @n2: is n2
*/
void swap(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
	{
	n2->next->prev = *n1;
	}
	n2->next = *n1;
	n2->prev = (*n1)->prev;
	if((*n1)->prev != NULL)
	{
		(*n1)->prev->next = n2;
	}
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}
