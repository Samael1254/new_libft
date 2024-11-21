/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear_from.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:06:12 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 15:06:13 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear_from(t_list *begin_list, unsigned int index,
		void (*free_fct)(void *))
{
	unsigned int	i;
	t_list			*temp;

	if (index == 0)
	{
		ft_list_clear(begin_list, free_fct);
		return ;
	}
	i = 0;
	while (i++ < index - 1 && begin_list)
		begin_list = begin_list->next;
	if (begin_list)
	{
		temp = begin_list->next;
		begin_list->next = NULL;
		begin_list = temp;
	}
	while (begin_list)
	{
		temp = begin_list->next;
		ft_delete_elem(begin_list, free_fct);
		begin_list = temp;
	}
}
