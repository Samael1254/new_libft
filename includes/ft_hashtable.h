/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashtable.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:47:46 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 11:48:25 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASHTABLE_H
# define FT_HASHTABLE_H

# ifndef INITIAL_SIZE
#  define INITIAL_SIZE 7
# endif

typedef struct s_ht_item
{
	char				*key;
	void				*data;
}						t_ht_item;

typedef struct s_hashtable
{
	struct s_ht_item	*table;
	unsigned int		load;
	unsigned int		size;
}						t_hashtable;

// basics
t_hashtable				*ft_ht_create(void);
void					ft_ht_destroy(t_hashtable *ht);
void					*ft_ht_get(t_hashtable *ht, const char *key);
char					*ft_ht_set(t_hashtable *ht, const char *key,
							void *data);
void					ft_ht_remove(t_hashtable *ht, const char *key);

// additional
unsigned int			ft_ht_length(t_hashtable *ht);
void					ft_ht_clear_data(t_hashtable *ht, void (*del)(void *));
void					ft_ht_print_debug(t_hashtable *ht, char type);

// utils
unsigned int			hash_function(const char *key);
void					ft_ht_resize(t_hashtable **ht);
t_hashtable				*ft_ht_create_advanced(unsigned int size,
							unsigned int load);

#endif
