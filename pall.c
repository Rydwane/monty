#include "monty.h"

/**
 * pall - Print the stack
 * @stack: head of linkedlist
 * @line_number: line number of the instruction
 *
 * Return: No return
 */
void pall(stack_t **stack, unsigned int line_number)
{

stack_t *temp = NULL;


if (*stack == NULL)
{
return;
}
if (*stack == NULL && line_number != 1)
{
free_dlistint(*stack);
free_globalvars();
exit(EXIT_SUCCESS);
}
temp = *stack;
while (temp->next != NULL)
temp = temp->next;
while (temp->prev != NULL)
{
printf("%d", temp->n);
temp = temp->prev;
printf("\n");
}
printf("%d\n", temp->n);
}
