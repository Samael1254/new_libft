/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashtable_additional.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 01:01:56 by gfulconi          #+#    #+#             */
/*   Updated: 2025/01/09 12:08:42 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hashtable.h"
#include "ft_hashtable_utils.h"
#include "ft_printf.h"
#include "ft_strings.h"
#include <stdlib.h>

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
	ft_printf("length = %u\n", ft_ht_length(ht));
	ft_printf("size = %u\n", ht->size);
	while (i < ht->size)
	{
		if (ht->table[i].key)
		{
			if (type == 'i')
				ft_printf("%s: %d", ht->table[i].key,
					*(int *)ht->table[i].data);
			else if (type == 's')
				ft_printf("%s: %s", ht->table[i].key,
					(char *)ht->table[i].data);
			else if (type == 'c')
				ft_printf("%s : %c", ht->table[i].key,
					*(char *)ht->table[i].data);
			ft_printf(" (i = %u, hash = %u)\n", i,
				hash_function(ht->table[i].key));
		}
		i++;
	}
}

char	**ft_ht_keys(t_hashtable *ht)
{
	unsigned int	i;
	unsigned int	j;
	char			**keys;

	keys = malloc(sizeof(char *) * (ht->load + 1));
	if (!keys)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ht->size)
	{
		if (ht->table[i].key)
		{
			keys[j++] = ft_strdup(ht->table[i].key);
			if (!keys[j - 1])
				return (ft_free_strtab(keys), NULL);
		}
		i++;
	}
	return (keys);
}

int	ft_ht_does_contain(t_hashtable *ht, char *key)
{
	unsigned int	i;

	i = hash_function(key) % ht->size;
	linear_probing(ht, &i, key);
	if (!ht->table[i].key)
		return (0);
	return (1);
}
