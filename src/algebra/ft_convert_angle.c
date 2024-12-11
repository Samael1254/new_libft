/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_angle_conv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:36:39 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 16:38:42 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>

double	ft_rad_to_deg(double rad)
{
	return (rad * 180 * M_1_PI);
}

double	ft_deg_to_rad(double deg)
{
	return (deg * M_PI / 180);
}
