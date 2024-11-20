#include "ft_list.h"
#include <stdlib.h>

void	ft_delete_elem(t_list *elem, void (*free_fct)(void *))
{
	(*free_fct)(elem->data);
	free(elem);
}
