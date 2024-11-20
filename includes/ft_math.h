#ifndef FT_MATH_H
# define FT_MATH_H

int	ft_fibonacci(int index);
int	ft_power(int nb, int power);
int	ft_factorial(int nb);
int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);
int	ft_abs(int nb);
int	*ft_range(int min, int max);

// Extremums
int	ft_min(int a, int b);
int	ft_max(int a, int b);
int	ft_array_max(int *array, int size);
int	ft_array_min(int *array, int size);
int	clamp(int value, int min, int max);

// get nb len base
int	get_intlen_base(int nb, int base_len);
int	get_ullen_base(unsigned long nb, int base_len);

// TODO
// PGCD and PPCM
// Matrixes and vectors
// Statistics (mean, variance, median, binomial coeff)
// Numerical Integration
// Complex numbers

#endif
