#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*iter;
	void	*new_data;

	result = NULL;
	while (lst)
	{
		new_data = (*f)(lst->data);
		iter = ft_create_elem(new_data);
		if (!iter)
		{
			del(new_data);
			ft_list_clear(result, del);
			return (NULL);
		}
		ft_list_push_back(&result, iter);
		lst = lst->next;
	}
	return (result);
}
