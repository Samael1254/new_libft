#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	int	size;
	int	i;

	size = ft_list_size(*begin_list);
	i = 0;
	while (i < size / 2)
	{
		ft_swap_elem(begin_list, i, size - i - 1);
		i++;
	}
}

// #include <stdio.h>
//
// void	ft_list_push_front(t_list **begin_list, void *data)
// {
// 	t_list	*temp;
//
// 	temp = *begin_list;
// 	*begin_list = ft_create_elem(data);
// 	(*begin_list)->next = temp;
// }
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
// 		ft_list_push_front(&head, (void *)(&arr[i]));
// 		i++;
// 	}
// 	// end
// 	ft_list_reverse(&head);
// 	// print_list()
// 	while (head)
// 	{
// 		printf("%d, ", *(int *)(head->data));
// 		head = head->next;
// 	}
// 	// end
// }
