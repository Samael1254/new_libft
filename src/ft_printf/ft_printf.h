/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:02:32 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/18 13:22:34 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

// flags macro consts
# define ALT_FLAG 0
# define ZERO_FLAG 1
# define MINUS_FLAG 2
# define SPACE_FLAG 3
# define PLUS_FLAG 4

# include <limits.h>
# include <stdarg.h>

typedef union u_value
{
	int				i;
	unsigned int	u;
	void			*p;
}					t_value;

typedef struct s_arg_params
{
	int				*flags;
	int				width;
	int				precision;
}					t_arg_params;

// UTILS
// utils_putnbr
int					ft_putnbr(int nb);
int					ft_putnbr_n(int nb, int n);
int					ft_putui_base(unsigned int nb, char *base);
int					ft_putui_base_n(unsigned int nb, char *base, int n);
int					ft_putul_base(unsigned long nb, char *base);
// utils_putmisc
int					ft_putchar(char c);
int					ft_putstr(char *str);
int					ft_putstrn(char *str, int n);
int					ft_putaddr(void *addr);
// utils_misc
int					isincharset(char c, const char *charset);
int					ft_max(int a, int b);
int					ft_min(int a, int b);
int					get_intlen_base(int nb, int base_len);
int					get_ullen_base(unsigned long nb, int base_len);

// get_params
int					get_precision(const char **format, va_list args,
						int *flags);
int					get_width(const char **format, va_list args, int *flags);
int					*get_flags(const char **format);

// get_arg_params
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

int					ft_printf(const char *format, ...);

#endif
