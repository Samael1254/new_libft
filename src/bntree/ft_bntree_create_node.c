/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntree_create_node.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:25:20 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:25:21 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_binary_tree.h"
#include "ft_memory.h"

t_bntree	*ft_bntree_create_node(void *data)
{
	t_bntree	*new_node;

	new_node = ft_calloc(1, sizeof(t_bntree));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	return (new_node);
}
