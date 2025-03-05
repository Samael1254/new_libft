/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntree_apply_infix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:25:10 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:25:10 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_binary_tree.h"

void	ft_bntree_apply_infix(t_bntree *root, void (*applyf)(void *))
{
	if (root->left)
		ft_bntree_apply_infix(root->left, applyf);
	applyf(root->data);
	if (root->right)
		ft_bntree_apply_infix(root->right, applyf);
}
