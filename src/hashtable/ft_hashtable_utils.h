/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashtable_utils.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:47:46 by gfulconi          #+#    #+#             */
/*   Updated: 2025/01/09 12:09:47 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASHTABLE_UTILS_H
# define FT_HASHTABLE_UTILS_H

# define INITIAL_SIZE 64

# include "ft_hashtable.h"

// utils

unsigned int	hash_function(const char *key);
void			linear_probing(t_hashtable *ht, unsigned int *i,
					const char *key);
t_hashtable		*ft_ht_resize(t_hashtable *ht);
t_hashtable		*ft_ht_create_advanced(unsigned int size, unsigned int load);

#endif
