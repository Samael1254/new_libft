/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:02:32 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/21 22:07:54 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// flags macro consts
# define ALT_FLAG 0
# define ZERO_FLAG 1
# define MINUS_FLAG 2
# define SPACE_FLAG 3
# define PLUS_FLAG 4

# include <stdarg.h>

typedef union u_value
{
	int				i;
	unsigned int	u;
	void			*p;
	double			f;
}					t_value;

typedef struct s_arg_params
{
	int				*flags;
	int				width;
	int				precision;
	char			length_mod;
}					t_arg_params;

// PUTDATA
// utils_putnbr
int					ft_putnbr(long long nb);
int					ft_putnbr_n(long long nb, int n);
int					ft_putull_base_n(unsigned long long nb, char *base, int n);
int					ft_putull_base(unsigned long long nb, char *base);
// utils_putmisc
int					ft_putchar(char c);
int					ft_putaddr(void *addr);
int					ft_putstr(char *str);
int					ft_putstrn(char *str, int n);
int					ft_putdouble(double nb, int precision);

// get params
int					get_precision(const char **format, va_list args,
						int *flags);
int					get_width(const char **format, va_list args, int *flags);
int					*get_flags(const char **format);

// get arg attributes
t_value				get_argval(const char conv, va_list arg);
int					get_arglen(const char conv, t_value val,
						t_arg_params params);

// print padding
int					printpadding(int width, int arglen, char c);
int					printf_flag_zero(const char conv, t_value *val,
						t_arg_params params, int arglen);

// printarg
int					print_nb_sign(const char conv, t_value *val,
						t_arg_params params);
int					printarg(const char conv, va_list arg, t_arg_params params);

// main function
int					ft_printf(const char *format, ...);

#endif
