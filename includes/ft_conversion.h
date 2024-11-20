/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversion.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:49:30 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 11:49:30 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONVERSION_H
# define FT_CONVERSION_H

int		ft_atoi(const char *nptr);
char	*ft_itoa(int nb);

int		ft_atoi_base(char *str, char *base);
char	*ft_itoa_base(int nb, char *base);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int		ft_check_base_errors(char *b);

#endif
