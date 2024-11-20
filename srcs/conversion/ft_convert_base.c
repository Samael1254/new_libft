/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 19:40:49 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 10:15:46 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_conversion.h"

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;

	if (ft_check_base_errors(base_from) || ft_check_base_errors(base_to))
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(nb, base_to));
}
