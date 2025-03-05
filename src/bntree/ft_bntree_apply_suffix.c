/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntree_apply_suffix.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:25:14 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:25:15 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_binary_tree.h"

void	ft_bntree_apply_suffix(t_bntree *root, void (*applyf)(void *))
{
	if (root->left)
		ft_bntree_apply_suffix(root->left, applyf);
	if (root->right)
		ft_bntree_apply_suffix(root->right, applyf);
	applyf(root->data);
}
