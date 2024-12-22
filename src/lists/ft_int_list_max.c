/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_list_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:07:57 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/22 14:12:32 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

t_list	*ft_int_list_max(t_list *begin_list)
{
	t_list	*max_elem;
	int		max;

	if (!begin_list)
		return (NULL);
	max = *(int *)begin_list->data;
	max_elem = begin_list;
	begin_list = begin_list->next;
	while (begin_list)
	{
		if (*(int *)begin_list->data > max)
		{
			max = *(int *)begin_list->data;
			max_elem = begin_list;
		}
		begin_list = begin_list->next;
	}
	return (max_elem);
}
