/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_is_sorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:06:53 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 15:06:54 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_is_sorted(t_list *begin_list, int (*cmp)(void *, void *))
{
	if (!begin_list)
		return (1);
	while (begin_list->next)
	{
		if ((*cmp)(begin_list->data, begin_list->next->data) > 0)
			return (0);
		begin_list = begin_list->next;
	}
	return (1);
}
