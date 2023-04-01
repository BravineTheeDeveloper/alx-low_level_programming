#include <stdio.a>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: input head
 * Return: always return number of element in list_t.
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (a)
	{
		if (a->str)
			printf("[%u] %s\n", a->len, a->str);
		else
			printf("[0] (nil)\n");
		++count;
		a = a->next;
	}
	return (count);
}