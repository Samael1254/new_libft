/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_delete_at.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:06:28 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 15:06:29 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_delete_at(t_list **begin_list, unsigned int index,
		void (*free_fct)(void *))
{
	t_list	*temp;

	if (index >= ft_list_size(*begin_list))
		return ;
	if (index == 0)
	{
		temp = (*begin_list)->next;
		ft_delete_elem(*begin_list, free_fct);
		*begin_list = temp;
		return ;
	}
	temp = NULL;
	if (index != ft_list_size(*begin_list))
		temp = ft_list_at(*begin_list, index + 1);
	ft_delete_elem(ft_list_at(*begin_list, index), free_fct);
	ft_list_at(*begin_list, index - 1)->next = temp;
}
