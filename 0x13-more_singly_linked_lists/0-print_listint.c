#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * print_list - prints a singly linked list
 * @h: pointer to head of singly linked list
 *
 * Return: Number of elements in list
 */
size_t print_list(const list_t *h)
{
	list_t *ptr;
	ptr = h;
	int count = 0;	
	while(ptr != NULL)
	{
		count++;
		ptr = ptr->next;
}
	return count;
}	
