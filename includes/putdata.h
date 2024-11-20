#ifndef PUTDATA_H
# define PUTDATA_H

// Chars and strings
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putstrn(char *str, int n);
void	ft_putaddr(void *addr);

// Numbers
void	ft_putint(int nb);
void	ft_putlong(long nb);
void	ft_putuint(unsigned int nb);
void	ft_putulong(unsigned long nb);
void	ft_putint_n(int nb, int n);

// Numbers base
void	ft_putint_base(int nbr, char *base);
void	ft_putui_base(unsigned int nb, char *base);
void	ft_putul_base(unsigned long nb, char *base);
void	ft_putui_base_n(unsigned int nb, char *base, int n);

#endif
