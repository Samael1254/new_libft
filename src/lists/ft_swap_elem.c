/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_elem.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:09:28 by gfulconi          #+#    #+#             */
/*   Updated: 2025/02/17 16:09:33 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap_elem(t_list **begin_list, unsigned int i, unsigned int j)
{
	t_list	*temp;
	t_list	*norminette;

	if (i == j)
		return ;
	if (i > j)
	{
		i = i + j;
		j = i - j;
		i = i - j;
	}
	temp = ft_list_at(*begin_list, i);
	if (i == 0)
		*begin_list = ft_list_at(*begin_list, j);
	else
	{
		norminette = ft_list_at(*begin_list, j);
		ft_list_at(*begin_list, i - 1)->next = norminette;
	}
	ft_list_at(temp, j - i - 1)->next = temp;
	temp = temp->next;
	norminette = ft_list_at(*begin_list, i + 1);
	ft_list_at(temp, j - i - 1)->next = norminette;
	ft_list_at(*begin_list, i)->next = temp;
}
