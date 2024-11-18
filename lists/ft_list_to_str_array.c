#include "ft_list.h"
#include <stdlib.h>

char	**ft_list_to_str_array(t_list *list)
{
	int		size;
	int		i;
	char	**array;

	size = ft_list_size(list);
	array = malloc(size * sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (list)
	{
		array[i] = (char *)(list->data);
		list = list->next;
		i++;
	}
	return (array);
}
