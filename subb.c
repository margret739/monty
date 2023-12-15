#include "monty.h"

/**
 * f_sub - substraction
 * @head: head
 * @count: line_number
 * Return: no return
 */

void f_sub(stack_t **head, unsigned int count)
{
	stack_t *aux;
	int min, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	min = aux->next->n - aux->n;
	aux->next->n = min;
	*head = aux->next;
	free(aux);
}
