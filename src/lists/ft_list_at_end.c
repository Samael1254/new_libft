/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at_end.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:15:59 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/19 15:19:35 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at_end(t_list *begin_list, unsigned int i)
{
	unsigned int	size;

	size = ft_list_size(begin_list);
	if (i >= size)
		return (NULL);
	return (ft_list_at(begin_list, size - i - 1));
}
