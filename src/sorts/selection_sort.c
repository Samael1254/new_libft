/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 01:03:16 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 01:03:36 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sorts.h"

void	selection_sort_int(int *tab, int size)
{
	int	n;
	int	i;
	int	min_id;

	n = 0;
	while (n < size)
	{
		min_id = n;
		i = n + 1;
		while (i < size)
		{
			if (tab[i] < tab[min_id])
				min_id = i;
			i++;
		}
		ft_swap_int(&tab[n], &tab[min_id]);
		n++;
	}
}

/*#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int	*tab;

	tab = malloc(sizeof(int) * (argc - 1));
	i = 0;
	while (i < argc - 1)
	{
		tab[i] = atoi(argv[i + 1]);
		i++;
	}
	selection_sort_int(tab, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
}*/
