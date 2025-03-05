/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntree_apply_prefix.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:25:13 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:25:13 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_binary_tree.h"

void	ft_bntree_apply_prefix(t_bntree *root, void (*applyf)(void *))
{
	applyf(root->data);
	if (root->left)
		ft_bntree_apply_prefix(root->left, applyf);
	if (root->right)
		ft_bntree_apply_prefix(root->right, applyf);
}
