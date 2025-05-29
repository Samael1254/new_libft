/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:09:11 by gfulconi          #+#    #+#             */
/*   Updated: 2025/05/29 17:17:26 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_sorted_list_insert(t_list **begin_list, void *data,
		int (*cmp)(void *, void *))
{
	t_list	*temp;
	t_list	*iter;

	if (!(*begin_list))
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	iter = *begin_list;
	temp = iter;
	while ((*cmp)(data, iter->data) > 0)
	{
		temp = iter;
		iter = iter->next;
	}
	temp->next = ft_create_elem(data);
	temp->next->next = iter;
}
