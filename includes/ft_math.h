/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 11:50:28 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/21 12:22:59 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

int			ft_fibonacci(int index);
int			ft_power(int nb, int power);
int			ft_factorial(int nb);
int			ft_is_prime(int nb);
int			ft_find_next_prime(int nb);
int			ft_abs(int nb);
int			*ft_range(int min, int max);

// Extremums
int			ft_min(int a, int b);
int			ft_max(int a, int b);
int			ft_array_max(int *array, int size);
int			ft_array_min(int *array, int size);
int			clamp(int value, int min, int max);

// nb len base
int			signed_nbrlen_base(long long nb, int base_len);
int			usigned_nbrlen_base(unsigned long long nb, int base_len);

// Doubles
long long	ft_truncate(double nb);
long long	ft_round(double nb);

// TODO
// Operations on doubles
// PGCD and PPCM
// Matrixes and vectors
// Statistics (mean, variance, median, binomial coeff)
// Numerical Integration
// Complex numbers

#endif
