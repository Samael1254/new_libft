/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:51:32 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/23 11:00:15 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_index(t_list *begin_list, t_list *elem)
{
	int	i;

	i = 0;
	while (begin_list)
	{
		if (begin_list == elem)
			return (i);
		i++;
		begin_list = begin_list->next;
	}
	return (-1);
}
