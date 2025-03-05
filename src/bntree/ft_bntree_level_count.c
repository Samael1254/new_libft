/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntree_level_count.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:25:27 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:25:27 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_binary_tree.h"
#include "ft_math.h"

int	ft_bntree_level_count(t_bntree *root)
{
	int	count_left;
	int	count_right;

	if (!root->left && !root->right)
		return (0);
	count_left = 0;
	count_right = 0;
	if (root->left)
		count_left = ft_bntree_level_count(root->left);
	if (root->right)
		count_right = ft_bntree_level_count(root->right);
	return (ft_max(count_left, count_right) + 1);
}
