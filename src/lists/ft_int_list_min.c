/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_list_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 20:07:57 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/04 20:12:04 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

t_list	*ft_int_list_min(t_list *begin_list)
{
	t_list	*min_elem;
	int		min;

	if (!begin_list)
		return (NULL);
	min = *(int *)begin_list->data;
	min_elem = begin_list;
	begin_list = begin_list->next;
	while (begin_list)
	{
		if (*(int *)begin_list->data < min)
		{
			min = *(int *)begin_list->data;
			min_elem = begin_list;
		}
		begin_list = begin_list->next;
	}
	return (min_elem);
}
