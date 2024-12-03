/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:02:32 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/02 16:53:41 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_UTILS_H
# define FT_PRINTF_UTILS_H

// flags macro consts
# define ALT_FLAG 0
# define ZERO_FLAG 1
# define MINUS_FLAG 2
# define SPACE_FLAG 3
# define PLUS_FLAG 4

# include <stdarg.h>
# include <stdint.h>

// Enum holding the length modifier of a printed argument
typedef enum e_len_mod
{
	none,
	hh,
	h,
	l,
	ll,
}				t_len_mod;

// Union holding the value of a printed argument
typedef union u_value
{
	intmax_t	i;
	uintmax_t	u;
	void		*p;
	double		f;
}				t_value;

// Structure holding the parameters of a printed argument
typedef struct s_arg_params
{
	int			*flags;
	int			width;
	int			precision;
	t_len_mod	len_mod;
	int			fd;
}				t_arg_params;

// utils_putint
int				ft_putnbr_fd(long long nb, int fd);
int				ft_putnbr_n_fd(long long nb, int n, int fd);
int				ft_putull_base_n_fd(unsigned long long nb, char *base, int n,
					int fd);
int				ft_putull_base_fd(unsigned long long nb, char *base, int fd);

// utils_putdouble
int				ft_putdouble_fd(double nb, int precision, int fd);
int				ft_putscient_fd(double nb, int precision, const char conv,
					int fd);

// utils_putmisc
int				ft_putchar_fd(char c, int fd);
int				ft_putaddr_fd(void *addr, int fd);
int				ft_putstr_fd(char *str, int fd);
int				ft_putstrn_fd(char *str, int n, int fd);

// get params
t_len_mod		get_len_mod(const char **format);
int				get_precision(const char **format, va_list args, int *flags);
int				get_width(const char **format, va_list args, int *flags);
int				*get_flags(const char **format);

// get arg attributes
t_value			get_argval(const char conv, va_list arg, t_len_mod len_mod);
int				get_arglen(const char conv, t_value val, t_arg_params params);
void			modify_len(const char conv, t_value *val, t_len_mod len_mod);

// print padding
int				printpadding(t_arg_params params, int arglen, char c);
int				printf_flag_zero(const char conv, t_value *val,
					t_arg_params params, int arglen);

// printarg
int				print_nb_sign(const char conv, t_value *val,
					t_arg_params params);
int				printarg(const char conv, va_list arg, t_arg_params params);

int				ft_vdprintf(int fd, const char *format, va_list args);

#endif
