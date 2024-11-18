#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	if (!(*begin_list))
		(*begin_list) = ft_create_elem(data);
	else
		ft_list_last(*begin_list)->next = ft_create_elem(data);
}

// #include <stdio.h>
//
// int	main(void)
// {
// 	t_list		*head;
// 	const int	arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
// 	const int	size = 8;
// 	int			i;
//
// 	// array_to_list()
// 	i = 1;
// 	head = ft_create_elem((void *)(&arr[0]));
// 	while (i < size)
// 	{
// 		ft_list_push_back(&head, (void *)(&arr[i]));
// 		i++;
// 	}
// 	// end
// 	// print_list()
// 	while (head)
// 	{
// 		printf("%d, ", *(int *)(head->data));
// 		head = head->next;
// 	}
// 	// end
// }
