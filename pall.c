#include "monty.h"

/**
 * f_pall - prints stack
 * @head: stack head
 * @count: no used
 * Return: no return
 */

void f_pall(stack_t **head, unsigned int count)
{
	stack_t *t;
	(void)count;

	t = *head;
	if (t == NULL)
		return;
	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
	}
}
