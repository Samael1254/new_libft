/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntree_delete_node.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:25:22 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:25:23 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_binary_tree.h"
#include <stdlib.h>

void	ft_bntree_delete_node(t_bntree *node, void (*free_fct)(void *))
{
	if (free_fct)
		free_fct(node->data);
	free(node);
}
