/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:25:50 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:25:51 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"
#include <stdlib.h>

void	ft_stack_clear(t_stack *stack, void (*free_fct)(void *))
{
	ft_list_clear(stack->top, free_fct);
	free(stack);
}
