/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:49:08 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 11:49:18 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

// Creation
t_list				*ft_create_elem(void *data);
t_list				*ft_list_cpy(t_list *src);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));

// Insertion
void				ft_list_push_back(t_list **begin_list, void *data);
void				ft_list_push_front(t_list **begin_list, void *data);
void				ft_list_insert(t_list **begin_list, void *data,
						unsigned int index);
void				ft_sorted_list_insert(t_list **begin_list, void *data,
						int (*cmp)(void *, void *));

// Deletion
void				ft_delete_elem(t_list *elem, void (*free_fct)(void *));
void				ft_list_clear(t_list *begin_list, void (*free_fct)(void *));
void				ft_list_remove_if(t_list **begin_list, void *data_ref,
						int (*cmp)(void *, void *), void (*free_fct)(void *));
void				ft_list_delete_at(t_list **begin_list, unsigned int index,
						void (*free_fct)(void *));
void				ft_list_clear_from(t_list *begin_list, unsigned int index,
						void (*free_fct)(void *));

// List info
unsigned int		ft_list_size(t_list *begin_list);
int					ft_list_is_sorted(t_list *begin_list, int (*cmp)(void *,
							void *));

// Navigation
t_list				*ft_list_last(t_list *begin_list);
t_list				*ft_list_at(t_list *begin_list, unsigned int nbr);
t_list				*ft_list_find(t_list *begin_list, void *data_ref,
						int (*cmp)(void *, void *));

// Sorting, merging and manipulating
void				ft_swap_elem(t_list **begin_list, unsigned int i,
						unsigned int j);
void				ft_list_reverse(t_list **begin_list);
void				ft_list_sort(t_list **begin_list, int (*cmp)(void *,
							void *));
void				ft_list_merge(t_list **begin_list1, t_list *begin_list2);
void				ft_sorted_list_merge(t_list **begin_list1,
						t_list *begin_list2, int (*cmp)(void *, void *));
t_list				*ft_list_clone(t_list *begin_list);

// Loop on list
void				ft_list_foreach(t_list *begin_list, void (*f)(void *));
void				ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
						void *data_ref, int (*cmp)(void *, void *));

// Conversion
t_list				*ft_int_array_to_list(int *array, int size);
t_list				*ft_strs_array_to_list(int size, char **strs);
int					*ft_list_to_int_array(t_list *list);
char				**ft_list_to_str_array(t_list *list);

// Display
void				print_int_list(t_list *begin_list);
void				print_strs_list(t_list *begin_list);

#endif
