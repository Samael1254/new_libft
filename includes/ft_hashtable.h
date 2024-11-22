/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashtable.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:47:46 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 16:56:14 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASHTABLE_H
# define FT_HASHTABLE_H

# define INITIAL_SIZE 7

// A key/data couple from a hashtable
typedef struct s_ht_item
{
	char				*key;
	void				*data;
}						t_ht_item;

// A hashtable data structure
typedef struct s_hashtable
{
	struct s_ht_item	*table;
	unsigned int		load;
	unsigned int		size;
}						t_hashtable;

// BASICS

// Creates an empty hashtable
t_hashtable				*ft_ht_create(void);
// Frees the memory of a hashtable and its keys, but not its content
void					ft_ht_destroy(t_hashtable *ht);
// Returns the element corresponding to the given key
void					*ft_ht_get(t_hashtable *ht, const char *key);
// Sets the element corresponding to the given key
char					*ft_ht_set(t_hashtable *ht, const char *key,
							void *data);
// Frees the given key
void					ft_ht_remove(t_hashtable *ht, const char *key);

// ADDITIONAL

// Returns the number of values inside the table
unsigned int			ft_ht_length(t_hashtable *ht);
// Frees the data sorted in the hashtable
void					ft_ht_clear_data(t_hashtable *ht, void (*del)(void *));
// Print the values inside the table for debugging
void					ft_ht_print_debug(t_hashtable *ht, char type);

#endif
