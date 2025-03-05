/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:25:53 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:25:53 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	*ft_stack_pop(t_stack *stack, void (*free_fct)(void *))
{
	t_list	*removed_node;
	void	*removed_data;

	removed_node = stack->top;
	removed_data = removed_node->data;
	stack->top = removed_node->next;
	ft_delete_elem(removed_node, free_fct);
	return (removed_data);
}
