/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 01:04:45 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 01:04:45 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sorts.h"

void	bubble_sort_int(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap_int(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
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
	bubble_sort_int(tab, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
}*/
