/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsurround.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:11:18 by gfulconi          #+#    #+#             */
/*   Updated: 2025/02/17 16:11:18 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"
#include <stdlib.h>

char	*ft_strsurround(char *str, char *surround)
{
	char	*new_str;
	int		surround_len;
	int		i;
	int		j;

	surround_len = ft_strlen(surround);
	new_str = malloc((ft_strlen(str) + 2 * surround_len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	while (surround[j])
		new_str[i++] = surround[j++];
	j = 0;
	while (str[j])
		new_str[i++] = str[j++];
	j = 0;
	while (surround[j])
		new_str[i++] = surround[surround_len - j++ - 1];
	new_str[i] = '\0';
	return (new_str);
}
