/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:08:47 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/04 17:02:47 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_printf.h"
#include <unistd.h>

void	ft_print_str_list(t_list *begin_list, char *sep)
{
	while (begin_list)
	{
		ft_printf("%s", (char *)(begin_list->data));
		if (begin_list->next)
			ft_printf("%s", sep);
		begin_list = begin_list->next;
	}
}
