/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 16:10:28 by gfulconi          #+#    #+#             */
/*   Updated: 2025/02/17 16:10:29 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chars.h"
#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	len;

	len = 0;
	while (s[len] && ft_get_char_index(s[len], reject) == -1)
		len++;
	return (len);
}
