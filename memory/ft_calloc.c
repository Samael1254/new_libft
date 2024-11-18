/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:51:46 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/18 14:20:03 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buf;

	if ((nmemb > 0 && size > 2147483647 / nmemb) || (size > 0
			&& nmemb > 2147483647 / size))
		return (NULL);
	buf = malloc(size * nmemb);
	if (buf == NULL)
		return (NULL);
	return (ft_bzero(buf, size * nmemb));
}
