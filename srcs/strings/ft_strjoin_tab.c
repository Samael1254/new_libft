/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:30:03 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 10:51:07 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"
#include <stdlib.h>

char	*ft_strjoin_tab(int size, char **strs, char *sep)
{
	char	*j_str;
	int		lent;
	int		i;

	if (size == 0)
	{
		j_str = malloc(sizeof(char));
		j_str[0] = '\0';
		return (j_str);
	}
	i = 0;
	lent = 0;
	while (i < size)
		lent += ft_strlen(strs[i++]);
	j_str = malloc(sizeof(char) * (lent + (size - 1) * ft_strlen(sep) + 1));
	i = 0;
	j_str[0] = '\0';
	while (i < size)
	{
		ft_strcat(j_str, strs[i++]);
		if (i != size)
			ft_strcat(j_str, sep);
	}
	return (j_str);
}
