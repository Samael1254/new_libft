/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_truncate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 12:13:04 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 01:06:19 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long	ft_truncate(double nb)
{
	long long	res;

	res = nb * 10;
	return (res / 10);
}
