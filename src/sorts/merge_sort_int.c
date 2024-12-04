/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 01:04:42 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/03 11:53:47 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void	merge_one(int *merged, int *section, int section_id, int other_id)
{
	merged[section_id + other_id] = section[section_id];
}

static int	*merge_halves(int *left, int *right, int size)
{
	int	*merged;
	int	i;
	int	j;

	i = 0;
	j = 0;
	merged = malloc(sizeof(int) * size);
	while (i < size / 2 && j < size - size / 2)
	{
		if (left[i] < right[j])
			merge_one(merged, left, i++, j);
		else
			merge_one(merged, right, j++, i);
	}
	while (i < size / 2)
		merge_one(merged, left, i++, j);
	while (j < size - size / 2)
		merge_one(merged, right, j++, i);
	return (merged);
}

int	*merge_sort(int *tab, int size)
{
	int	*left;
	int	*right;
	int	*merged;

	if (size == 1)
	{
		merged = malloc(sizeof(int));
		merged[0] = tab[0];
	}
	else
	{
		left = merge_sort(tab, size / 2);
		right = merge_sort(tab + size / 2, size - size / 2);
		merged = merge_halves(left, right, size);
		free(left);
		free(right);
	}
	return (merged);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	int	i;
	int	*tab;
	int	*sorted;

	tab = malloc(sizeof(int) * (argc - 1));
	i = 0;
	while (i < argc - 1)
	{
		tab[i] = atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	sorted = merge_sort(tab, argc - 1);
	free(tab);
	while (i < argc - 1)
	{
		printf("%d, ", sorted[i]);
		i++;
	}
	free(sorted);
}*/
