/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:25:55 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:25:56 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include "ft_stack.h"

int	ft_stack_push(t_stack *stack, void *data)
{
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (!new_node)
		return (1);
	new_node->next = stack->top;
	stack->top = new_node;
	return (0);
}
