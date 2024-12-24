/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:05:29 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/24 00:42:19 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_delete_elem(t_list *elem, void (*free_fct)(void *))
{
	if (!elem)
		return ;
	if (elem->data && free_fct)
		(*free_fct)(elem->data);
	free(elem);
}
