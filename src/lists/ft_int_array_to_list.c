/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_array_to_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:05:55 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 15:05:56 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_int_array_to_list(int *array, int size)
{
	t_list	*list;
	int		i;

	list = NULL;
	i = 0;
	while (i < size)
		ft_list_push_back(&list, (void *)&array[i++]);
	return (list);
}
