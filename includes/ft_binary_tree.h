#ifndef FT_BINARY_TREE_H
# define FT_BINARY_TREE_H

// Binary Tree structure
typedef struct s_bntree
{
	void			*data;
	struct s_bntree	*left;
	struct s_bntree	*right;
}					t_bntree;

// Creates a new tree node and sets its data
t_bntree			*ft_bntree_create_node(void *data);

// Traverse the tree with the prefix method and apply a function to each node
void				ft_bntree_apply_prefix(t_bntree *root,
						void (*applyf)(void *));
// Traverse the tree with the infix method and apply a function to each node
void				ft_bntree_apply_infix(t_bntree *root,
						void (*applyf)(void *));
// Traverse the tree with the suffix method and apply a function to each node
void				ft_bntree_apply_suffix(t_bntree *root,
						void (*applyf)(void *));
// Inserts a new node inside a tree in a sorted manner
void				ft_bntree_insert(t_bntree *root, void *data,
						int (*cmpf)(void *, void *));
// Returns a pointer to the first element of the tree corresponding to
// the given one
void				*ft_bntree_search(t_bntree *root, void *data_ref,
						int (*cmpf)(void *, void *));

#endif
