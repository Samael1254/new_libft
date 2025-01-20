/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtable_additional_2.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:45:27 by gfulconi          #+#    #+#             */
/*   Updated: 2025/01/20 18:30:33 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"
#include <stdlib.h>

float	ft_ht_load_factor(t_hashtable *ht)
{
	return ((float)ht->load / (float)ht->size);
}

void	**ft_ht_data(t_hashtable *ht)
{
	void			**array;
	unsigned int	i;
	unsigned int	j;

	array = malloc((ht->load + 1) * sizeof(void *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ht->size)
	{
		if (ht->table[i].key)
			array[j++] = ht->table[i].data;
		i++;
	}
	return (array);
}
