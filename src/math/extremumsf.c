/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extremumsf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 01:06:26 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 16:34:58 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

double	ft_minf(double a, double b)
{
	if (a < b)
		return (a);
	return (b);
}

double	ft_maxf(double a, double b)
{
	if (a > b)
		return (a);
	return (b);
}

double	ft_clampf(double value, double min, double max)
{
	if (value < min)
		return (min);
	if (value > max)
		return (max);
	return (value);
}
