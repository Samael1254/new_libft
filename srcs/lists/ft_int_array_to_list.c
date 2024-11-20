#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_int_array_to_list(int *array, int size)
{
	t_list	*list;
	int		i;

	list = NULL;
	i = 0;
	while (i < size)
		ft_list_push_back(&list, (void *)&array[i++]);
	return (list);
}
