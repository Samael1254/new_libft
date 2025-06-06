/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:08:11 by gfulconi          #+#    #+#             */
/*   Updated: 2025/01/27 11:43:38 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

int	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;

	new_elem = ft_create_elem(data);
	if (!new_elem)
		return (1);
	if (!(*begin_list))
		*begin_list = new_elem;
	else
		ft_list_last(*begin_list)->next = new_elem;
	return (0);
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
