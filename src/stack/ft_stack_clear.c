#include "ft_stack.h"
#include <stdlib.h>

void	ft_stack_clear(t_stack *stack, void (*free_fct)(void *))
{
	ft_list_clear(stack->top, free_fct);
	free(stack);
}
