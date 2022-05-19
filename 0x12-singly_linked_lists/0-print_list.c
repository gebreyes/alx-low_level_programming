#include <stdio.h>
#include "lists.h"
/**
 * print_list - print list
 * Return: size_t
 * @h: list
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;
	const list_t *ptr;

	ptr = h;

	while (ptr)
	{
		if (!ptr->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s", ptr->len, ptr->str);

		nodes++;
		ptr = ptr->next;
		printf("\n");
	}
	return (nodes);
}
