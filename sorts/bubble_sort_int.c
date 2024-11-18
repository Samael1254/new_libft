static void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	bubble_sort_int(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab [i + 1])
		{
			swap(&tab[i], &tab[i + 1]);
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
