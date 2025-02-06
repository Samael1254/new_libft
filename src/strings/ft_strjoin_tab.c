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

char	*ft_strjoin_tab(char **strs, char *sep)
{
	char	*j_str;
	int		lent;
	int		i;

	if (!strs)
		return (NULL);
	lent = 0;
	i = 0;
	while (strs[i])
		lent += ft_strlen(strs[i++]);
	j_str = malloc(sizeof(char) * (lent + (i - 1) * ft_strlen(sep) + 1));
	if (!j_str)
		return (NULL);
	i = 0;
	j_str[0] = '\0';
	while (strs[i])
	{
		ft_strcat(j_str, strs[i++]);
		if (strs[i])
			ft_strcat(j_str, sep);
	}
	return (j_str);
}
