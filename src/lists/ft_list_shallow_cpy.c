/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:06:19 by gfulconi          #+#    #+#             */
/*   Updated: 2025/02/18 13:45:25 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stddef.h>

t_list	*ft_list_shallow_copy(t_list *begin_list)
{
	t_list	*new_list;

	new_list = NULL;
	while (begin_list)
	{
		if (ft_list_push_back(&new_list, begin_list->data))
			return (ft_list_clear(new_list, NULL), NULL);
		begin_list = begin_list->next;
	}
	return (new_list);
}
