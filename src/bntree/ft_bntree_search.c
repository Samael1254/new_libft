/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntree_search.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 13:25:28 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/05 13:25:28 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_binary_tree.h"
#include <stddef.h>

void	*ft_bntree_search(t_bntree *root, void *data_ref, int (*cmpf)(void *,
			void *))
{
	if (!root)
		return (NULL);
	if (cmpf(data_ref, root->data) == 0)
		return (root->data);
	if (cmpf(data_ref, root->data) < 0)
	{
		if (!root->left)
			return (NULL);
		return (ft_bntree_search(root->left, data_ref, cmpf));
	}
	if (!root->right)
		return (NULL);
	return (ft_bntree_search(root->right, data_ref, cmpf));
}
