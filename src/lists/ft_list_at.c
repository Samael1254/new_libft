/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:06:00 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 15:06:01 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;

	i = 0;
	while (i < nbr)
	{
		if (!begin_list)
			return (NULL);
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
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
// 	printf("%d", *(int *)(ft_list_at(head, 7)->data));
// }
