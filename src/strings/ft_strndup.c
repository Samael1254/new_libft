/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:10:59 by gfulconi          #+#    #+#             */
/*   Updated: 2025/02/17 16:10:59 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strndup(const char *s, size_t n)
{
	char	*dest;
	int		len;

	if (ft_strlen(s) < n)
		len = ft_strlen(s);
	else
		len = n;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_strncpy(dest, s, len);
	dest[len] = '\0';
	return (dest);
}
