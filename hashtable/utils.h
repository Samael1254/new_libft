#ifndef UTILS_H
# define UTILS_H

# include "hashtable.h"

unsigned int	hash_function(const char *key);
void			ft_ht_resize(t_hashtable **ht);
t_hashtable		*ft_ht_create_advanced(unsigned int size, unsigned int load);

#endif
