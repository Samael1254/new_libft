#include "ft_memory.h"
#include "ft_stack.h"

t_stack	*ft_create_stack(void)
{
	return (ft_calloc(1, sizeof(t_stack)));
}
