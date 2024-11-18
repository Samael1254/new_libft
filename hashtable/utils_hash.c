#include "hashtable.h"
#include "hashtable_stucts.h"
#include "utils.h"
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

void	ft_ht_resize(t_hashtable **ht)
{
	t_hashtable		*new_ht;
	unsigned int	new_size;
	unsigned int	i;

	if ((*ht)->size < 2147483648)
		new_size = 2 * (*ht)->size;
	else
		new_size = 4294967295;
	new_ht = ft_ht_create_advanced(new_size, (*ht)->load);
	i = 0;
	while (i < (*ht)->size)
	{
		if ((*ht)->table[i].key)
			ft_ht_set(new_ht, (*ht)->table[i].key, (*ht)->table[i].data);
		i++;
	}
	ft_ht_destroy(*ht);
	*ht = new_ht;
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
	{
		free(ht);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ht->table[i].key = NULL;
		ht->table[i++].data = NULL;
	}
	return (ht);
}
