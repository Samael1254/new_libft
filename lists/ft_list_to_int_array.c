#include "ft_list.h"
#include <stdlib.h>

int	*ft_list_to_int_array(t_list *list)
{
	int	size;
	int	i;
	int	*array;

	size = ft_list_size(list);
	array = malloc(size * sizeof(int));
	if (!array)
		return (NULL);
	i = 0;
	while (list)
	{
		array[i] = *(int *)(list->data);
		list = list->next;
		i++;
	}
	return (array);
}
