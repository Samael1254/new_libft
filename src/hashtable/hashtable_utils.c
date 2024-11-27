/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtable_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 01:01:36 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/27 18:07:21 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"
#include "ft_hashtable_utils.h"
#include "ft_strings.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int	hash_function(const char *key)
{
	const unsigned int	a = 31;
	unsigned int		hash_code;
	int					i;

	hash_code = 0;
	i = 0;
	while (key[i])
		hash_code = hash_code * a + key[i++];
	return (hash_code);
}

t_hashtable	*ft_ht_resize(t_hashtable *ht)
{
	t_ht_item		*old_table;
	unsigned int	i;
	unsigned int	j;

	old_table = ht->table;
	ht->table = malloc((2 * ht->size) * sizeof(t_ht_item));
	if (!ht->table)
		return (NULL);
	i = 0;
	while (i < ht->size)
	{
		if (old_table[i].key)
		{
			j = hash_function(old_table[i].key) % (ht->size * 2);
			linear_probing(ht, &j, old_table[i].key);
			ht->table[j].key = old_table[i].key;
			ht->table[j].data = old_table[i].data;
		}
		i++;
	}
	free(old_table);
	ht->size *= 2;
	return (ht);
}

t_hashtable	*ft_ht_create_advanced(unsigned int size, unsigned int load)
{
	t_hashtable		*ht;
	unsigned int	i;

	ht = malloc(sizeof(t_hashtable));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->load = load;
	ht->table = malloc(size * sizeof(t_ht_item));
	if (!ht->table)
		return (free(ht), NULL);
	i = 0;
	while (i < size)
	{
		ht->table[i].key = NULL;
		ht->table[i++].data = NULL;
	}
	return (ht);
}

void	linear_probing(t_hashtable *ht, unsigned int *i, const char *key)
{
	while (ht->table[*i].key && ft_strcmp(key, ht->table[*i].key) != 0)
	{
		if ((*i)++ == ht->size - 1)
			*i = 0;
	}
}
