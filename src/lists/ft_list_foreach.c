/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:06:37 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 15:06:38 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

// #include <stdio.h>
//
// void	print_int_data(void *data)
// {
// 	printf("%d, ", *(int *)(data));
// }
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
// 	ft_list_foreach(head, &print_int_data);
// 	// end
// }
