#include "ft_list.h"
#include "ft_stack.h"

int	ft_stack_push(t_stack *stack, void *data)
{
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (!new_node)
		return (1);
	new_node->next = stack->top;
	stack->top = new_node;
	return (0);
}
