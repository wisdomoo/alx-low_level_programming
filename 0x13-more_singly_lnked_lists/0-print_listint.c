#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*print_listint-return the length of the list
*return-length
*/
size_t print_listint(const listint_t *h)
{
	if(h == null)
	{
		printf("Error\n");
		return (1);
	}
	int count = 0;
	size_t *ptr;
	ptr = head;
	while(ptr != null)
	{
		count++;
		ptr = ptr->link;
	}
	return count;	
}			

