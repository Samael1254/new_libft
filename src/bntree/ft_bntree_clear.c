/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntree_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:25:18 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:25:18 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_binary_tree.h"

void	ft_bntree_clear(t_bntree *root, void (*free_fct)(void *))
{
	if (!root)
		return ;
	if (root->left)
		ft_bntree_clear(root->left, free_fct);
	if (root->right)
		ft_bntree_clear(root->right, free_fct);
	ft_bntree_delete_node(root, free_fct);
	return ;
}
