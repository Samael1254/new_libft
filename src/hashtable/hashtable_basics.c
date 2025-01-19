/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtable_basics.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 01:01:41 by gfulconi          #+#    #+#             */
/*   Updated: 2025/01/19 19:36:23 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"
#include "ft_hashtable_utils.h"
#include "ft_strings.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

t_hashtable	*ft_ht_create(void)
{
	return (ft_ht_create_advanced(INITIAL_SIZE, 0));
}

void	ft_ht_destroy(t_hashtable *ht)
{
	unsigned int	i;

	i = 0;
	while (i < ht->size)
	{
		if (ht->table[i].key)
			free(ht->table[i].key);
		i++;
	}
	free(ht->table);
	free(ht);
}

void	*ft_ht_get(t_hashtable *ht, const char *key)
{
	unsigned int	i;

	i = hash_function(key) % ht->size;
	linear_probing(ht, &i, key);
	if (!ht->table[i].key)
		return (NULL);
	return (ht->table[i].data);
}

char	*ft_ht_set(t_hashtable *ht, const char *key, void *data)
{
	unsigned int	i;

	if (ht->load > ht->size / 2 && ht->size <= INT_MAX)
	{
		if (!ft_ht_resize(ht))
			return (NULL);
	}
	i = hash_function(key) % ht->size;
	linear_probing(ht, &i, key);
	if (ht->table[i].key)
		ht->table[i].data = data;
	else
	{
		ht->table[i].key = ft_strdup(key);
		if (!ht->table[i].key)
			return (NULL);
		ht->table[i].data = data;
		ht->load += 1;
	}
	return (ht->table[i].key);
}

void	ft_ht_remove(t_hashtable *ht, const char *key)
{
	unsigned int	i;

	i = hash_function(key) % ht->size;
	linear_probing(ht, &i, key);
	if (ht->table[i].key)
	{
		free(ht->table[i].key);
		ht->table[i].key = NULL;
		ht->load--;
	}
}
