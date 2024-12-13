/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublelen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:30:56 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/12 16:51:34 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

int	ft_doublelen(double nb, int precision)
{
	return (usigned_nbrlen_base(ft_abs(ft_truncate(nb)), 10) + (precision > 0)
		* (precision + 1) + (nb < 0));
}
