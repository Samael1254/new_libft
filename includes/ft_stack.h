#ifndef FT_STACK_H
# define FT_STACK_H
# include "ft_list.h"

typedef struct s_stack
{
	t_list	*top;
}			t_stack;

// Creates a stack
t_stack		*ft_create_stack(void);
// Pushes an element at the top of the stack
int			ft_stack_push(t_stack *stack, void *data);
// Pops the element at the top of the stack and return its value
void		*ft_stack_pop(t_stack *stack, void (*free_fct)(void *));
// Clears a stack and its data
void		ft_stack_clear(t_stack *stack, void (*free_fct)(void *));

#endif
