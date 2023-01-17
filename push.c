#include "monty.h"

/**
 * push - Add node to the stack
 * @stack: head of linkedlist
 * @line_number: line number of the instruction
 *
 * Return: No return
 */
void push(stack_t **stack, unsigned int line_number)
{

int n = 0;

if (globalvar.token2 == NULL)
{
free_dlistint(*stack);
stderr_int(line_number);
}
if (!_isdigit() || stack == NULL)
{
free_dlistint(*stack);
stderr_int(line_number);
}
n = atoi(globalvar.token2);
if (*stack  == NULL)
{
create_node_stackfirst(stack, n);
}
else
{
create_node_stackend(stack, n);
}
}
