/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 11:54:30 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/05 11:58:05 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_find_index(t_list *begin_list, void *data, int (*cmp)(void *,
			void *))
{
	return (ft_list_index(begin_list, ft_list_find(begin_list, data, cmp)));
}
