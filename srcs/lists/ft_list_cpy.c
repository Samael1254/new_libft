#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_cpy(t_list *src)
{
	t_list	*new_list;
	t_list	*iter;

	if (!src)
		return (NULL);
	new_list = ft_create_elem(src->data);
	iter = new_list;
	src = src->next;
	while (src)
	{
		iter->next = ft_create_elem(src->data);
		iter = iter->next;
		src = src->next;
	}
	iter->next = NULL;
	return (new_list);
}
