/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:06:19 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 15:06:19 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_clone(t_list *begin_list)
{
	t_list	*new_list;

	while (begin_list)
	{
		ft_list_push_back(&new_list, begin_list->data);
		begin_list = begin_list->next;
	}
	return (new_list);
}
