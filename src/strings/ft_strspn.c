/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:10:53 by gfulconi          #+#    #+#             */
/*   Updated: 2025/02/17 16:10:54 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chars.h"
#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	len;

	len = 0;
	while (s[len] && ft_get_char_index(s[len], accept) != -1)
		len++;
	return (len);
}
