#include "ft_list.h"

t_list	*ft_str_array_to_list(int size, char **strs)
{
	int		i;
	t_list	*str_list;

	i = 1;
	str_list = ft_create_elem(strs[0]);
	while (i < size)
		ft_list_push_back(&str_list, strs[i++]);
	return (str_list);
}

// #include <stdio.h>
//
// int	main(int argc, char **argv)
// {
// 	t_list	*head;
// 	int		i;
//
// 	head = ft_list_push_strs(argc - 1, &argv[1]);
// 	// print_list()
// 	while (head)
// 	{
// 		printf("%s, ", (char *)(head->data));
// 		head = head->next;
// 	}
// 	// end
// }
