/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:08:33 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 15:10:10 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	int	i;
	int	size;

	size = ft_list_size(*begin_list);
	i = 0;
	while (i < size - 1)
	{
		if ((*cmp)(ft_list_at(*begin_list, i)->data, ft_list_at(*begin_list, i
				+ 1)->data) > 0)
		{
			ft_swap_elem(begin_list, i, i + 1);
			i = 0;
		}
		else
			i++;
	}
}
