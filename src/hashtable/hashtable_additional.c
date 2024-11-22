/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtable_additional.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 01:01:56 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 01:01:56 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"
#include <stdio.h>

unsigned int	ft_ht_length(t_hashtable *ht)
{
	return (ht->load);
}

void	ft_ht_clear_data(t_hashtable *ht, void (*del)(void *))
{
	unsigned int	i;

	i = 0;
	while (i < ht->size)
		(*del)(ht->table[i++].data);
}

void	ft_ht_print_debug(t_hashtable *ht, char type)
{
	unsigned int	i;

	i = 0;
	printf("length = %u\n", ft_ht_length(ht));
	printf("size = %u\n", ht->size);
	while (i < ht->size)
	{
		if (ht->table[i].key)
		{
			if (type == 'i')
				printf("%s: %d", ht->table[i].key, *(int *)ht->table[i].data);
			else if (type == 's')
				printf("%s: %s", ht->table[i].key, (char *)ht->table[i].data);
			else if (type == 'c')
				printf("%s : %c", ht->table[i].key, *(char *)ht->table[i].data);
			printf(" (i = %u, hash = %u)\n", i,
				hash_function(ht->table[i].key));
		}
		i++;
	}
}
