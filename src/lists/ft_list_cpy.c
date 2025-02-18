/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_cpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:06:22 by gfulconi          #+#    #+#             */
/*   Updated: 2025/02/18 13:39:07 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_deep_cpy(t_list *src, void *(*dup_fct)(void *),
		void (*free_fct)(void *))
{
	t_list	*new_list;
	void	*new_data;

	if (!src)
		return (NULL);
	new_list = NULL;
	while (src)
	{
		new_data = dup_fct(src->data);
		if (!new_data)
			ft_list_clear(new_list, free_fct);
		if (ft_list_push_back(&new_list, new_data))
		{
			ft_list_clear(new_list, free_fct);
			free(new_data);
		}
		src = src->next;
	}
	return (new_list);
}
