int	ft_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
		result *= nb--;
	return (result);
}
