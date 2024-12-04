#include "ft_list.h"
#include "ft_math.h"
#include "ft_memory.h"

static int	key(int nb, int digit)
{
	int	i;

	i = 0;
	while (i < digit)
	{
		nb = nb / 10;
		i++;
	}
	return (nb % 10);
}

t_list	*ft_counting_sort(t_list *begin_list, int digit)
{
	int		*count;
	int		i;
	t_list	*iter;

	count = ft_calloc(ft_array_max(ft_list_to_int_array(begin_list),
				ft_list_size(begin_list)), sizeof(int));
	iter = begin_list;
	while (iter)
	{
		count[*(int *)iter->data]++;
		iter = iter->next;
	}
	i = 0;
	while (i++ < ft_list_size(begin_list))
		count[i] += count[i - 1];
}
